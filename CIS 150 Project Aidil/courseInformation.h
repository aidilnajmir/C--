#ifndef COURSEINFORMATION_H
#define COURSEINFORMATION_H
#include <iostream>
#include <string>
using namespace std;

// class definition
class courseEnrollment {

// private members
private:
    // class variables
    int courseID = 12975;
    int departmentCourseID = 150;
    int section = 4;
    int creditNumber = 4;
    int roomNumber[2] = { 2195, 1 };
    int maxEnroll = 30;
    int studentNum = 0;
    string daysTime[2] = { "Monday & Wednesday", "2:00PM - 3:15PM" };
    string campus = "Dearborn";
    string courseInstructor;
    string studentID[30];
    string courseStatus;

// public members
public:
    // course identification number function
    void setCourseIdentification() {
        cout << "Enter course identification number: ";
        cin >> courseID;
    }

    // department course ID function
    void setDepartmentCourse() {
        cout << "Enter department course ID: ";
        cin >> departmentCourseID;
    }

    // section function
    void setSection() {
        cout << "Enter the section: ";
        cin >> section;
    }

    // number of credits function
    void setNumberCredit() {
        cout << "Enter the credit numbers for the course: ";
        cin >> creditNumber;
    }

    // building ID and room number function
    void setBuildingRoom() {
        cout << "Enter the building ID and room number: " << endl;
        cout << "Building: ";
        cin >> roomNumber[0];
        cout << "Room: ";
        cin >> roomNumber[1];
    }

    // days and times function
    void setDayTime() {
        cout << "Enter the days and times: " << endl;
        cout << "Days: ";
        cin >> daysTime[0];
        cout << "Times: ";
        cin >> daysTime[1];
    }

    // maximum enrollment function
    void setMaxEnrollment() {
        cout << "Enter the maximum number of course enrollment: ";
        cin >> maxEnroll;
    }

    // campus function
    void setCampus() {
        cout << "Enter the campus name: ";
        cin >> campus;
    }

    // course instructor function
    void setCourseInstructor() {
        cout << "Enter course instructor: ";
        cin >> courseInstructor;
    }

    // number of student function
    void setStudentNumber() {
        cout << "Enter the number of student to enroll: ";
        cin >> studentNum;
        string stuName;
        string stuID;

        for (int i = 0; i < studentNum; i++) {
            cout << "Enter the name of the student & student ID." << endl;
            cout << "Student Name: ";
            cin >> stuName;
            cout << "Student ID: ";
            cin >> stuID;
            studentID[i] = stuName + " " + stuID;
        }
    }

    // course status function
    void setCourseStatus() {
        cout << "Enter course status (Open/ Closed/ Canceled): ";
        cin >> courseStatus;
    }

    // display function
    void display() {
        cout << "Course Identication Number: " << courseID << endl;
        cout << "Department course ID: " << departmentCourseID << " | Section: " << section << endl;
        cout << "Number of credits: " << creditNumber << endl;
        cout << "Meeting Days: " << daysTime[0] << " | Times: " << daysTime[1] << endl;
        cout << "Building ID: " << roomNumber[0] << " | Room: " << roomNumber[1] << endl;
        cout << "Maximum course enrollment: " << maxEnroll << endl;
        cout << "Campus: " << campus << endl;
        cout << "Name of the course instructor: " << courseInstructor << endl;
        cout << "Number of students currently enrolled: " << studentNum << endl;
        cout << "Current student name and ID: " << endl;
        for (int i = 0; i < studentNum; i++)
            cout << studentID[i] << endl;
        cout << "Course status: " << courseStatus << endl;
    }

};

#endif