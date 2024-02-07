// FILE: Lab4.cpp

// My Name: Mohamad Aidil Najmir Bin Mohamad Sobri

// Date of  First Version of this Program: 10/13/2021

// Date of Working Version of this Program: 10/13/2021



// Computes the payroll for a company
#include <iostream>
using namespace std;

int main()
{
	int numberEmp; // input - number of employees
	int countEmp; // counter - current employee number
	float hours; // input - hours worked
	float rate; // input - hourly rate
	float pay; // output - weekly pay
	float totalPay; // output - company payroll

	// Get number of employees from user.
	cout << "Enter number of employees: ";
		cin >> numberEmp;

	// Process payroll for all employees.
	totalPay = 0.0;
	countEmp = 0;

	while(countEmp < numberEmp)
	{ //
		cout << "Hours: ";
		cin >> hours;
		cout << "Rate : $";
		cin >> rate;
		pay = hours * rate;
		cout << "Pay is $" << pay << endl << endl;
		totalPay = totalPay + pay; // add next pay
		countEmp = countEmp + 1;
	} //

	cout << "Total payroll is $" << totalPay << endl;
	cout << "All employees processed." << endl;

	return 0;
}