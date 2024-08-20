/*
 * Name: Logan McDavid
 * Filename: pointerUsage.cpp
 * Date: 8 / 8 / 24 
 * Purpose: Show how referencing and
 * dereferencing manipulated pointers
 * and how to initialize a pointer with 
 * the address of a variable
 */

//Libraries included
#include <iostream>
using namespace std;

int main(){
    //Interger variable
    int num = 11;

    //Output value of num (variable)
    cout << "Value of num: " << num << endl;

    //Declaring a pointer to integer
    //Initialize ptr with the address of our num variable
    int* ptr = &num;

    //Output VALUE of num using our pointer
    cout << "\nValue of num using our pointer: " << *ptr << endl;

    //Output ADDRESS of num using our pointer
    cout << "\nAddress of num: " << ptr << endl;

    //Modify VALUE of num using the pointer
    *ptr = 20;

    //Output new num value using the variable
    cout << "\nNew value of num variable after motifying pointer: " << num << endl;

    //Output new num value using the pointer
    cout << "\nNew value of num using the pointer: " << *ptr << endl;



    return 0;
}

