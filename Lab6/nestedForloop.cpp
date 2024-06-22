/***
 * Name: Logan McDavid
 * Filename: nestedForLoop.cpp
 * Date: 6 / 8 / 24
 * Purpose: Demonstrate how to implement 
 * a nested for loop
*/

//Libraries included
#include <iostream>
using namespace std;

int main(){
    //Variables declared
    int personCount = 0, gradeCount = 0, examScore = 0, total = 0, numExams = 0;
    double average = 0;
    
    //Input number of students and exams
    cout << "Enter the number of students enrolled in your class: ";
    cin >> personCount;
    cout << "\nEnter the number of exams each student took in your class: ";
    cin >> gradeCount;

    cout << endl;

    //Nested for loop
    for(int i = 0; i < personCount; i++){
        for(int j = 0; j < gradeCount; j++){
            //Input exam
            cout << "PERSON " << i+1 << " EXAM " << j+1 << ": ";
            cin >> examScore;
            //Inout validation
            while(examScore > 100 || examScore < 0){
                cout << "Please enter a score between 0 and 100: ";
                cin >> examScore;
            }
            //Total exam score
            total += examScore;
        }
        cout << endl;
    }   

    //Calculate average
    numExams = personCount * gradeCount;
    average = total / numExams;
    cout << "\nThe average grade of the class on the exams is " << average << "!\n";

    //Display class average depending on grade
    if(average >= 89.5)
        cout << "CONGRATS! THE CLASS EXAM AVERAGE WAS AN A!";
    else if(average >= 79.5)
        cout << "Woohoo! The class average was a B!";
    else if(average >= 69.5)
        cout << "You know what they say... C's get degrees!";
    else if(average >= 59.5)
        cout << "Welp. At least a D isn't an F";
    else
        cout << "Crying in the club, the class average was an F...";
    


    return 0;
}