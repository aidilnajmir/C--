// FILE: Lab6.cpp

// My Name: Mohamad Aidil Najmir Bin Mohamad Sobri

// Date of  First Version of this Program: 10/27/2021

// Date of Working Version of this Program: 10/27/2021



//	Accumulate the sum and average of a list of data values using functions
#include <iostream>
using namespace std;

//	Function prototype
double computeSum(int);
double computeAve(double, int);

//	Main function
int main() {

	int numItems;
	double sum, average;

	//	User enter the number of data items
	cout << "Enter the number of data items: ";
	cin >> numItems;

	if (numItems <= 0) {
		cout << "Invalid input." << endl;
		cout << "The program cannot compute the sum and average." << endl;
		return 0;
	}

		//	Calling computeSum and computeAve functions
		sum = computeSum(numItems);
		average = computeAve(sum, numItems);

		//	Display the sum and average of the data items
		cout << endl << "The sum of " << numItems << " data items: " << sum << endl;
		cout << "The average of " << numItems << " data items: " << average << endl;

		return 0;
}

//	Compute sum function definition
double computeSum(int userItems) {
	
	double data;
	double sum = 0;
	
	cout << "Enter the numbers for " << userItems << " data items: " << endl;

	for (int i = 0; i < userItems; i++) {
		cin >> data;
		sum += data;
	}
	return sum;
}

//	Compute average function definition
double computeAve(double sum, int userItems) {
	
	double average;
	
	average = sum / userItems;

	return average;
}

