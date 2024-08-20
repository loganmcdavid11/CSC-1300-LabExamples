/*
 * Name: Logan McDavid
 * Filename: header.h
 * Date: 6 / 10 / 24
 * Purpose: Demonstrate how to separate a program
 * into multiple files
 * Demonstrate how to pass variables by reference
 * in functions
*/

//Header guards
#ifndef FUNCTIONS_H
#define FUNCTIONS_HJ

//Libraries included
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>
using namespace std;

//Constant variables used
const string fighter1 = "Kendrick Lamar", fighter2 = "Drake", fighter3 = "J.Cole";
const string weapon1 = "Black Panther's Vibranium Daggers", 
weapon2 = "a Heart-Shaped Gavel", weapon3 = "Basketball Sharpshooter";

//Function prototypes
int fighter();

void opponent(int, string&, int&);

void fight(string, string, int, int&, bool&);

void displayWins(int, int, int);


//Header guard
#endif