/*
 * Name: Logan McDavid
 * Filename: doWhile.cpp
 * Date: 5 / 7 / 24
 * Purpose: Demonstrates how to implement
 * a do while loop
*/

//Libraries included
#include <iostream>
using namespace std;

int main(){
    //Variables declared
    int choice = 0, num1 = 0, num2 = 0, result = 0;

    //Loop runs at least once
    do{
        //Menu
        cout << "Choose one of the options:\n";
        cout << "  1. Add two numbers\n";
        cout << "  2. Subtract two numbers\n";
        cout << "  3. Exit program\n";
        cout << "Please enter 1-3: ";
        cin >> choice;

        //Input validation loop
        while(choice < 1 || choice > 3){
            cout << "\nPlease enter a valid number: ";
            cin >> choice;
        }

        //Choice 1
        if(choice == 1){
            cout << "Please enter your first number: ";
            cin >> num1;
            cout << "Please enter your second number: ";
            cin >> num2;
            result = num1 + num2;
            cout << "The sum is " << result << endl << endl;
        
        //Choice 2
        }else if(choice == 2){
            cout << "Please enter your first number: ";
            cin >> num1;
            cout << "Please enter your second number: ";
            cin >> num2;
            result = num1 - num2;
            cout << "The difference is " << result << endl << endl;

        //Choice 3
        }else if(choice == 3)
            cout << "Exiting program" << endl;
    
    //Executes while choice is not 3
    }while(choice != 3);


    return 0;
}