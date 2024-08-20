/*
 * Name: Logan McDavid
 * Filename: nestedLoops.cpp
 * Date: 5 / 10 / 24
 * Purpose: Example program that contains 
 * nested loops 
*/

#include <iostream>
using namespace std;

int main(){
    //Variables declared
    int choice = 0, num1 = 0, num2 = 0, result = 0, count = 0;

    //Loop runs at least once
    do{
        //Menu
        cout << "Choose one of the options:\n";
        cout << "  1. Multiply two numbers\n";
        cout << "  2. Divide two numbers\n";
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
            cout << "Please enter your first POSITIVE number: ";
            cin >> num1;
            //Input validation loop
            while(num1 < 1){
                cout << "Invalid entry. Please enter a positive number: ";
                cin >> num1;
            }
            cout << "Please enter your second POSITIVE number: ";
            cin >> num2;
            //Input validation loop
            while(num1 < 1){
                cout << "Invalid entry. Please enter a positive number: ";
                cin >> num1;
            }
            result = num1 * num2;
            cout << "The product is " << result << endl << endl;

            //Increment count
            count++;
        
        //Choice 2
        }else if(choice == 2){
            cout << "Please enter your first number: ";
            cin >> num1;
            cout << "Please enter your second number (Cannot be 0): ";
            cin >> num2;
            //Input validation loop
            while(num2 == 0){
                cout << "Invalid entry. Please enter a value (Cannot be 0): ";
                cin >> num2;
            }
            result = num1 / num2;
            cout << "The quotient is " << result << endl;
            result = num1 % num2;  
            cout << "The remainder is " << result << endl << endl;

            //Increment count
            count += 1;

        //Choice 3
        }else if(choice == 3)
            cout << "Exiting program" << endl;
    
    //Executes while choice is not 3
    }while(choice != 3);

    //Display count value
    cout << "\nYou did an operation " << count << " times.";


    return 0;
}