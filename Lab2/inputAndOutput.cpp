/***
 * Name: Logan McDavid
 * Filename: inputAndOutput.cpp
 * Date: 5 / 6 / 24
 * Purpose: Practice input and output and using
 * cin.ignore() 
*/

#include <iostream>
using namespace std;

int main(){
    //Varables declared
    string name, school, degree;
    int age = 0, gradYear = 0;

    //Read im name
    cout << "What is your name? ";
    getline(cin, name);

    //Read in age
    cout << "What is your age? ";
    cin >> age;

    //cin.ignore necessary when going from cin -> getline
    cin.ignore();

    //Read in school
    cout << "What school do you go to? ";
    getline(cin, school);

    //Read in graduate year
    cout << "What year do you expect to graduate? ";
    cin >> gradYear;

    //cin.ignore necessary when going from cin -> getline
    cin.ignore();

    //Read in degree
    cout << "What degree do you expect to graduate with? ";
    getline(cin, degree);

    //Output Results
    cout << "\n\n" << name << " is a " << age << " year old student at " 
    << school << " in the class of " << gradYear << " with a degree in "
    << degree << "!" << endl;


    return 0;
}