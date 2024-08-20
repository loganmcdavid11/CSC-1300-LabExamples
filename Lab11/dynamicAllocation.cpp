/**
 * Name: Logan McDavid
 * Filename: dynamicAllocation.cpp
 * Date: 8 / 12 / 24
 * Purpose: Demonstrate dynamic memory allocation 
 * and why we might use it
 */

#include <iostream>
#include <string>

using namespace std;

struct Student{
    string name;
    int age, hours;
    float gpa;

};

int main(){
    //Variables declared
    int numStu = 0;
    Student* students;  //A pointer that holds the addterss of the Student strucure

    //Input number of students
    cout << "Please enter the numebr of students you would like to add: ";
    cin >> numStu;

    //Dynamically allocate an array of student structures
    students = new Student[numStu];

    //Input student details
    for(int i = 0; i < numStu; i++){
        cout << "\nSTUDENT " << i + 1 << ":\n";
        cout << "  Please enter the students name: ";
        cin.ignore();
        getline(cin, students[i].name);

        cout << "  Please enter the student's age: ";
        cin >> students[i].age;

        cout << "  Please enter the student's GPA: ";
        cin >> students[i].gpa;

        cout << "  Please enter the student's number of hours this semester: ";
        cin >> students[i].hours;
    }



    //Display student info
    cout << "\nStudent's info:\n";
    for(int i = 0; i < numStu; i++){
        cout << "STUDENT " << i + 1 << ":\n";
        cout << "  Name: " << students[i].name << endl;
        cout << "  Age: " << students[i].age << endl;
        cout << "  GPA: " << students[i].gpa << endl;
        cout << "  Number of Hours: " << students[i].hours << endl;
    }

    //Free the duynamically allocated memory
    delete [] students;
 

    return 0;
}