// FILE: Lab5.cpp

// My Name: Mohamad Aidil Najmir Bin Mohamad Sobri

// Date of  First Version of this Program: 10/20/2021

// Date of Working Version of this Program: 10/20/2021



//	Compute distance of two points (x1,y1) and (x2,y2)
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	// Declare variables
	double x1, y1, x2, y2, distance;

	cout << "This program computes the distance between two points.\n" << endl;
	
	// Coordinate of the first point
	cout << "Enter the coordinates of the first point (x1,y1)." << endl;
	cout << "x1 :";
	cin >> x1;
	cout << "y1 :";
	cin >> y1;
	cout << endl;

	// Coordinate of the second point
	cout << "Enter the coordinates of the second point (x2,y2)." << endl;
	cout << "x2 :";
	cin >> x2;
	cout << "y2 :";
	cin >> y2;
	cout << endl;

	// Compute distance
	distance = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));

	// Display distance
	cout << "The distance between (" << x1 << "," << y1 << ") and (" << x2 << "," << y2 << ") is " << distance << endl;

}