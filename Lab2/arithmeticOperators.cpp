/*
 * Name: Logan McDavid
 * Filename: arithmeticOperators.cpp
 * Date: 9 / 9 / 2024
 * Purpose: Demonstrate how to use different 
 * arithmetric operators and how to apply them
*/

#include <iostream>
using namespace std;

int main(){
    //Variables declared
    int num1 = 0, num2 = 0; 
    int add = 0, sub = 0, mult = 0, mod = 0, div = 0;  



    //"The Math Man" not scary at all...
    cout << "        ___________        \n";
    cout << "       |  _    _   |       \n";
    cout << "       | | |  | |  |       \n";
    cout << "      /   -====-   \\       \n";
    cout << "     /     o  o     \\      \n";
    cout << "    |     \\____/     |     \n";
    cout << "    |      \\__/      |     \n";
    cout << "   / \\    ______    / \\    \n";
    cout << "  /   \\  |      |  /   \\   \n";
    cout << " |     | | MATH  | |     |  \n";
    cout << "  \\     \\________/     /   \n";
    cout << "   \\       |  |       /    \n";
    cout << "    \\_____/    \\_____/     \n";
    cout << "      | |        | |        \n";
    cout << "      |_|        |_|        \n";
    cout << "     /_/          \\_\\      \n";

    //Introduction message
    cout << "Hi, I am The Math Man! Please enter 2 numbers so I can\n";
    cout << "apply different arithmetic operators to them!\n";
    cout << "However I am allergic to decimals so please enter integers\n\n";

    //Input two numbers
    cout << "Number 1: (Please enter an integer) ";
    cin >> num1;
    cout << "Number 2: (Please enter an integer) ";
    cin >> num2;

    //Addition
    add = num1 + num2;
    cout << "\nADDITION: " << num1 << " + " << num2 << " = " << add;

    //Subtraction
    sub = num1 - num2;
    cout << "\nSUBTRACTION: " << num1 << " - " << num2 << " = " << sub;

    //Multiplication
    mult = num1 * num2;
    cout << "\nMULTIPLICATION: " << num1 << " * " << num2 << " = " << mult;

    //Division
    div = num1 / num2;
    cout << "\nDIVISION: " << num1 << " / " << num2 << " = " << div;

    //Modulus (Remainder from division)
    mod = num1 % num2;
    cout << "\nMODULUS: " << num1 << " % " << num2 << " = " << mod;


    return 0;
}