/*
 * Name: Logan McDavid
 * Filename: inputAndOutput.cpp
 * Date: 5 / 6 / 24
 * Purpose: Learn how to use characters and 
 * different ways to manipulate them
*/

//Libraries included
#include <iostream>
using namespace std;

int main(){
    //Variables declared 
    char c1, c2, c3;
    int total = 0;

    //Read in characters
    cout << "Character 1: ";
    cin >> c1;
    cout << "Character 2: ";
    cin >> c2;
    cout << "Character 3: ";
    cin >> c3;

    //Display characters in different orders
    cout << "Different ways to organize your characters\n";
    cout << c1 << c2 << c3 << endl;
    cout << c1 << c3 << c2 << endl;
    cout << c2 << c1 << c3 << endl;
    cout << c2 << c3 << c1 << endl;
    cout << c3 << c1 << c2 << endl;
    cout << c3 << c2 << c1 << endl;

    //Calculate the ASCII value
    total = c1 + c2 + c3;
    cout << "The total ASCII value of your characters is " << total << endl;


    return 0;
}