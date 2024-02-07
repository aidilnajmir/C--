// FILE: Lab7.cpp

// My Name: Mohamad Aidil Najmir Bin Mohamad Sobri

// Date of  First Version of this Program: 11/3/2021

// Date of Working Version of this Program: 11/3/2021



// File: Lab7.cpp
// Copies file input.txt to file BinMohamadSobri.txt

#include <cstdlib>     // for the definition of EXIT_FAILURE
#include <fstream>     // required for external file streams
#include <iostream>
using namespace std;

// Associate stream objects with external file names
#define inFile "input.txt"
#define outFile "BinMohamadSobri.txt"

// Functions used ...
// Copies one line of text
int copyLine(ifstream&, ofstream&);

int main()
{

    // Local data ...
    int lineCount;    // output: number of lines processed
    ifstream ins;     // ins is as an input stream
    ofstream outs;    // outs is an output stream

    // Open input and output file, exit on any error.
    ins.open(inFile);      // connects ins to file inFile
    if (ins.fail())
    {
        cerr << "*** ERROR: Cannot open " << inFile
            << " for input." << endl;
        return EXIT_FAILURE;    // failure return
    }  // end if

    outs.open(outFile);     // connect outs to file outFile
    if (outs.fail())
    {
        cerr << "*** ERROR: Cannot open " << outFile
            << " for output." << endl;
        return EXIT_FAILURE;    // failure return
    }  // end if

    // Copy each character from inData to outData.
    lineCount = 0;
    do
    {
        if (copyLine(ins, outs) != 0)
            lineCount++;
    } while (!ins.eof());

    // Display a message on the screen.
    cout << "Input file copied to output file." << endl;
    cout << lineCount << " lines copied." << endl;

    ins.close();           // close input file stream
    outs.close();        // close output file stream

    return 0;       // successful return
}


// Copy one line of text from one file to another
// Pre:     ins is opened for input and outs for output.
// Post:    Next line of ins is written to outs.
//          The last character processed from ins is <nwln>;
//          the last character written to outs is <nwln>.
// Returns: The number of characters copied.
int copyLine
(ifstream& ins,          // IN: ins stream
    ofstream& outs)         // OUT: outs stream
{
    // Local data ...
    const char NWLN = '\n';          // newline character

    char nextCh;                    // inout: character buffer
    int charCount = 0;              // number of characters copied

    // Copy all data characters from stream ins to 
    //    stream outs.
    ins.get(nextCh);
    while ((nextCh != NWLN) && !ins.eof())
    {
        outs.put(nextCh);
        charCount++;
        ins.get(nextCh);
    }  // end while

    // If last character read was NWLN write it to outs.
    if (!ins.eof())
    {
        outs.put(NWLN);
        charCount++;
    }
    return charCount;
}  // end copyLine