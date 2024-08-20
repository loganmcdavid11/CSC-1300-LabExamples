/*
 * Name: Logan McDavid
 * Filename: arrayOfPointers.cpp
 * Date: 8 / 8 / 24
 * Purpose: Demonstrate how we might use array
 * of pointers and why we might use them
 */

// Libraries included
#include <iostream>
#include <string>
using namespace std;

int main(){
    //Variables declared
    int numCity = 0, numHouseTypes = 0;

    //Introduction message
    cout << "Welcome to city planner!\n\nEnter the number of cities you would like to plan: ";
    cin >> numCity;

    //Array to store city names
    string cityNames[numCity];

    //Pointer array with the size as number of cities
    int* houseArr[numCity];

    //Input number of types of houses in each city
    cout << "\nHow many types of houses do you have in each city: ";
    cin >> numHouseTypes;

    //Array to store house type names
    string houseTypeNames[numHouseTypes];

    //Input city names
    cin.ignore();
    for (int i = 0; i < numCity; i++) {
        cout << "Enter the name of city " << i + 1 << ": ";
        getline(cin, cityNames[i]);
    }

    //Input house type names
    for (int i = 0; i < numHouseTypes; i++) {
        cout << "Enter the name of house type " << i + 1 << ": ";
        getline(cin, houseTypeNames[i]);
    }

    //Allocate memory for each city's house type
    for (int i = 0; i < numCity; i++) {
        houseArr[i] = new int[numHouseTypes];
    }

    //Enter house numbers for each type in each city
    cout << "\n\nPlease enter the number of houses for each type in each city.\n";
    for (int i = 0; i < numCity; i++) {
        for (int j = 0; j < numHouseTypes; j++) {
            cout << "\nCITY: " << cityNames[i] << " - HOUSE TYPE: " << houseTypeNames[j] << ": ";
            cin >> houseArr[i][j];
        }
        cout << endl;
    }

    //Output city names, house type names, and house numbers
    cout << "\nHere are your city and house type values:";
    for (int i = 0; i < numCity; i++) {
        cout << "\nCity: " << cityNames[i] << "\n";
        for (int j = 0; j < numHouseTypes; j++) {
            cout << "  House Type: " << houseTypeNames[j] << " - Number of Houses: " << houseArr[i][j] << "\n";
        }
    }

    //Free dynamically allocated memory
    for (int i = 0; i < numCity; i++) {
        delete[] houseArr[i];
    }

    return 0;
}
