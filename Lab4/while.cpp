/*
 * Name: Logan McDavid
 * Filename: while.cpp
 * Date: 5 / 6 / 24
 * Purpose: Demonstrate how to implement
 * a while loop 
*/

//Libraries included
#include <iostream>
//Random number generator libraries
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    //Variables declared
    int randNum = 0, guess = 0;

    //Random number generator
    srand(time(0));

    //Random number 1-10
    randNum = rand()%(10-1+1)+1;

    cout << "I am thinking of a number 1-10.\n";

    //Runs while the user does not guess the random number
    while(guess != randNum){
        //Read in input
        cout << "\nWhat number am I thinking of? ";
        cin >> guess;

        //Correct number or not
        if(guess != randNum)
            cout << "\nNope thats not the number I was thinking of\n";
        else
            cout << "\nYou guessed it!";
    }


    return 0;
}