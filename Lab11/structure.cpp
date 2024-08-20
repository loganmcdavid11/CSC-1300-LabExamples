/**
 * Name: Logan McDavid
 * Filename: structure.cpp
 * Date: 8 / 12 / 24
 * Purpose: Demonstrate how to implement
 * structures and how we might use them
 */

#include <iostream>
using namespace std;

struct Student{
    string name;
    int age, hours;
    float gpa;

};

int main(){
    //Define structure instance
    Student student1;

    //Input student details
    cout << "Please enter the students name: ";
    getline(cin, student1.name);

    cout << "Please enter the student's age: ";
    cin >> student1.age;

    cout << "Please enter the student's GPA: ";
    cin >> student1.gpa;

    cout << "Please enter the student's number of hours this semester: ";
    cin >> student1.hours;

    //Display student info
    cout << "\nStudent's info:\n";
    cout << "Name: " << student1.name << endl;
    cout << "Age: " << student1.age << endl;
    cout << "GPA: " << student1.gpa << endl;
    cout << "Number of Hours: " << student1.hours << endl;
 

    return 0;
}