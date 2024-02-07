// FILE: Lab3.cpp

// My Name: Mohamad Aidil Najmir Bin Mohamad Sobri

// Date of First Version of this Program: 9/29/2021

// Date of Working Version of this Program: 9/29/2021



#include <iostream>

using namespace std;

int main()
{

	// Local data
	double gpa;

	cout << "Enter your GPA: " << endl;
	cin >> gpa;

	// When input is 0.0 to 4.0
	if ((gpa >= 0.0) && (gpa <= 4.0)) {
		
		// GPA 0.0 to 0.99
		if (gpa < 1.0) {
			cout << "Failed Semester - Registration Suspended" << endl;
		}

		// GPA 1.0 to 1.99
		else if (gpa < 2.0) {
			cout << "On Probation for Next Semester" << endl;
		}

		// GPA 2.0 to 2.99
		else if (gpa < 3.0) {
			cout << "Pass" << endl;
		}

		// GPA 3.0 to 3.49
		else if (gpa < 3.5) {
			cout << "Dean's List for Semester" << endl;
		}

		// GPA 3.5 to 4.0
		else {
			cout << "Highest Honors for Semester" << endl;
		}
	}


	// When input is out of range (less than 0.0 or more than 4.0)
	else {
		cout << "Invalid input" << endl;
		return main();
	}

	return 0;
}