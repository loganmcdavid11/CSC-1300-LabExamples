/*
 * Name: Logan McDavid
 * Filename: 2darray.cpp
 * Date: 7 / 12 / 24
 * Purpose: Demonstrate how to implement a
 * 2D array
*/

//Libraries included
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//Constant variables for max size of 2D array
const int MAXROW = 10;
const int MAXCOL = 10;

int main(){
    //Variables declared
    int numClasses = 0, numTests = 0, testCount = 0, totalCount = 0;
    double classTotal = 0, total = 0, classAvg = 0, totalAvg = 0;
    //2D array declared
    double testScores[MAXROW][MAXCOL] = {};
    
    //Number of classes student is taking 
    cout << "How many classes did you take this semester?: ";
    cin >> numClasses;
    while(numClasses <= 0){
        cout << "Please enter a number greater than 0: ";
        cin >> numClasses;
    }
    cin.ignore();

    //Array that keeps track of the student's class names
    string classNames[numClasses];
    
    //Outer for loop: Runs for as many classes the student is taking
    for(int i = 0; i < numClasses; i++){
        //Input name of class
        cout << "\nWhat is the name of class " << i + 1 << "?: ";
        getline(cin, classNames[i]);
        //Input number of tests associated with specific class
        cout << "How many tests were in " << classNames[i] << "?: ";
        cin >> numTests;
        while(numTests <= 0){
            cout << "Please enter a number greater than 0: ";
            cin >> numTests;
        }
        cout << endl;

        //Inner for loop: Runs for as many tests associated with specific class
        for(int j = 0; j < numTests; j++){
            //Input test score
            cout << classNames[i] << " TEST " << j + 1 << ": ";
            cin >> testScores[i][j];
            while(testScores[i][j] <= 0){
                cout << "Please enter a number greater than 0: ";
                cin >> testScores[i][j];
            }
        }
        cin.ignore();
    }

    //Print out test scores
    cout << "Here are your test scores printed out:\n";
    //Outer for loop: Print out class name we are working with
    for(int i = 0; i < numClasses; i++){
        //Reset variable values
        classTotal = 0;
        testCount = 0;

        //Print out class name we are working with
        cout << "\nCLASS " << i + 1 << ": " << classNames[i];
        cout << "\n-------------------------\n";

        //Inner for loop: Print out each test score associated with specific class
        for(int j = 0; j < MAXCOL && testScores[i][j] != 0; j++){  //"testScores[i][j] != 0" prevents the code from printing out the rest of the empty 2D array
            //Print out test scores
            cout << left << setw(10) << j + 1 << setw(10) << testScores[i][j] << endl;
            //Total up for our averages later on in code
            classTotal += testScores[i][j];
            total += testScores[i][j];
            testCount++;
            totalCount++;
        }
        //Calculate and print class average
        classAvg = classTotal / testCount;
        cout << "Average test score in class: " << fixed << setprecision(1) << classAvg << endl;
    }
    
    //Calculate and print average among all classes
    totalAvg = total / totalCount;
    cout << "\n\nYour average among all classes is " << fixed << setprecision(1) << totalAvg << endl;


    return 0;
}