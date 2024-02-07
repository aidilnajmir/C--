// FILE: Lab8_Aidil.cpp

// My Name: Mohamad Aidil Najmir Bin Mohamad Sobri

// Date of  First Version of this Program: 11/10/2021

// Date of Working Version of this Program: 11/10/2021

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

//	function prototype
void readStudData(ifstream& rss, int scores[], int id[], int& count, bool& tooMany);
float mean(int scores[], int count);
void printTable(int score[], int ID[], int count);
void printGrade(int oneScore, float average);

//	array size
const int MAX_SIZE = 10;

//	main function
int main()
{
	//	local variable
	int scores[MAX_SIZE];
	int ID[MAX_SIZE];
	int count;
	bool tooMany;

	//	read data from file named "scores.txt"
	ifstream inFile;
	inFile.open("scores.txt");
	readStudData(inFile, scores, ID, count, tooMany);

	//	close the file
	inFile.close();

	if (tooMany) cout << "\nWarning! Some data is missing\n";

	printTable(scores, ID, count);
	cout << endl;
	system("Pause");
	return 0;
}

//	function declarations
//	function to read student data
void readStudData(ifstream& rss, int scores[], int id[], int& count, bool& tooMany)
{

	tooMany = false;
	count = 0;

	while (!rss.eof())
	{
		if (count == MAX_SIZE) break;
		rss >> id[count] >> scores[count];
		count++;
	}

	if (!rss.eof() && count == MAX_SIZE) tooMany = true;
}

// function to compute the average of the scores
float mean(int scores[], int count)
{
	int sum = 0;

	for (int i = 0; i < count; i++)
	{
		sum += scores[i];
	}

	return (float)sum / count;
}

//	function to print the table of the data
void printTable(int score[], int ID[], int count)
{

	float average = mean(score, count);

	cout << "Average: " << average << endl;

	cout << "ID\t" << "Score\t" << "Grade" << endl;


	for (int i = 0; i < count; i++)
	{
		cout << ID[i] << '\t' << score[i] << '\t';
		printGrade(score[i], average);
	}
}

//	function to print the grade of the score
void printGrade(int oneScore, float average)
{

	if (oneScore < average + 10 && oneScore > average - 10) cout << "Satisfactory\n";
	else if (oneScore > average + 10) cout << "Outstanding\n";
	else cout << "Unsatisfactory\n";
}