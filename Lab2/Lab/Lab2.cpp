// FILE: Lab2.cpp

// My Name: Mohamad Aidil Najmir Bin Mohamad Sobri

// Date of  First Version of this Program: 9/22/2021

// Date of Working Version of this Program: 9/22/2021



#include <iostream>

using namespace std;

int main()
{

	// Local data ...
	int x, y; // two items (x and y)

	// Prompt user to enter and read first data item.
	cout << "Enter your first number: " << endl;
	cin >> x;

	// Prompt user to enter and read second data item.
	cout << "Enter your second number: " << endl;
	cin >> y;

	// Sum
	int sum = x + y;

	// Difference
	int difference;
	if (x > y)
	{
		difference = x - y;
	}
	else
	{
		difference = y - x;
	}

	// Product
	int product = x * y;

	// Quotient 
	// x is converted to float to make a mixed-type expression
	float quotient = static_cast<float>(x) / y;

	// Output sum of item1 and item2.
	cout << "The sum of " << x << " and " << y << " is " << sum << endl;

	// Output the difference of item1 and item2.
	cout << "The difference of " << x << " and " << y << " is " << difference << endl;

	// Output the product of item1 and item2.
	cout << "The product of " << x << " and " << y << " is " << product << endl;

	// Output the quotient of item1 and item2.
	cout << "The quotient of " << x << " divided by " << y << " is " << quotient << endl;


	return 0;
}