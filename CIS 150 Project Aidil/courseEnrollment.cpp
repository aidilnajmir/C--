#include <iostream>
#include "courseInformation.h"
using namespace std;

// function prototype (menu)
int menu(courseEnrollment &course);

// main function
int main() {

    // variables
    courseEnrollment course;
    int choice;

    cout << "University of Michigan-Dearborn Course Enrollment" << endl << endl;

    // course instructor, number of students and course status function is called
    course.setCourseInstructor();
    course.setStudentNumber();
    course.setCourseStatus();

    cout << endl;
    course.display();

    // prompt the user wether to continue or exit the program
    cout << endl << "Do you want to continue?" << endl;
    cout << "Enter any number to continue, -1 to exit." << endl;
    cin >> choice;
    while (choice != -1) {
        choice = menu(course);
    }

    return 0;

}

// function declaration (menu)
int menu(courseEnrollment &course) {
    // option menu (edit or display)
    int menuChoice;

    cout << endl << "University of Michigan-Dearborn Course Enrollment" << endl;
    cout << "\t1. Edit course enrollment information" << endl;
    cout << "\t2. Display course enrollment information" << endl;
    cout << endl << "Enter the number (1 or 2) to continue, or -1 to exit: ";
    cin >> menuChoice;
    cout << endl;

    // information edit menu 
    if (menuChoice == 1) {
        
        int choice;
        cout << "Choose the information that you want to edit." << endl;
        cout << "\t1. University course ID" << endl;
        cout << "\t2. Department ID" << endl;
        cout << "\t3. Section" << endl;
        cout << "\t4. Number of Credits" << endl;
        cout << "\t5. Days and times" << endl;
        cout << "\t6. Building and room" << endl;
        cout << "\t7. Maximum course enrollment" << endl;
        cout << "\t8. Campus" << endl;
        cout << "\t9. Course instructor" << endl;
        cout << "       10. Currently enrolled student" << endl;
        cout << "       11. Course status" << endl;
        cout << "Enter the number (1-11) to edit: ";
        cin >> choice;
        cout << endl;

        if (choice == 1) {
            course.setCourseIdentification();
        }

        else if (choice == 2) {
            course.setDepartmentCourse();
        }

        else if (choice == 3) {
            course.setSection();
        }

        else if (choice == 4) {
            course.setNumberCredit();
        }

        else if (choice == 5) {
            course.setDayTime();
        }

        else if (choice == 6) {
            course.setBuildingRoom();
        }

        else if (choice == 7) {
            course.setMaxEnrollment();
        }

        else if (choice == 8) {
            course.setCampus();
        }

        else if (choice == 9) {
            course.setCourseInstructor();
        }

        else if (choice == 10) {
            course.setStudentNumber();
        }

        else if (choice == 11) {
            course.setCourseStatus();
        }

        else {
            int errorChoice = 0;

            cout << "Invalid input. Try again." << endl;
            cout << "Enter any number to return to main menu, or -1 to exit." << endl;
            cin >> errorChoice;

            if (errorChoice == -1) {
                return -1;
            }
            else {
                menu(course);
            }
        }

    }
    
    // display the course enrollment information
    else if (menuChoice == 2) {
        
        course.display();
        int choice;
        cout << endl << "Do you want to continue?" << endl;
        cout << "Enter any number to continue, -1 to exit." << endl;
        cin >> choice;

        if (choice == -1) {
            return -1;
        }
        else {
            menu(course);
        }
        
    }

    // invalid input (prompt the user to enter the input again)
    else {
        
        int errorChoice = 0;

        cout << "Invalid input. Try again." << endl;
        cout << "Enter any number to return to main menu, or -1 to exit." << endl;
        cin >> errorChoice;

        if (errorChoice == -1) {
            return -1;
        }
        else {
            menu(course);
        }
    }
    return 0;
}