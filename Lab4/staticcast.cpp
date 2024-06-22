/**
 * Name: Logan McDavid
 * Filename: staticcast.cpp
 * Date: 5 / 7 / 24
 * Purpose: Demonstrate how to implement 
 * static cast 
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //Variables declared
    int intSum = 0;
    double doubleSum = 0, num1 = 0, num2 = 0;

    //Round decimal to 100th decimal place 
    cout << fixed << setprecision(2);

    //Enter values
    cout << "Multiply two numbers with decimal values.\n";
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    
    //Find product
    doubleSum = num1 * num2;
    cout << "The product of " << num1 << " and " << num2 << " is " << doubleSum
    << " (Rounded to the 100th decimal place)\n\n"; 

    //Convert decimal value to integer value 
    intSum = static_cast<int>(doubleSum);
    cout << "The product rounded down is " << intSum;
    

    return 0;
}