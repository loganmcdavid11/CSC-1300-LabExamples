/*
 * Name: Logan McDavid
 * Filename: forloop.cpp
 * Date: 5 / 7 / 24
 * Purpose: Demonstrate how to implement
 * a for loop
*/

//Libraries included
#include <iostream> 
using namespace std;

int main(){
    //Variables declared
    int numMeals = 0, numCals = 0, totalCals = 0;
    string mealType;
    
    //Enter number of meals
    cout << "Welcome to a calorie counter!\n";
    cout << "Please enter how many meals you ate today? ";
    cin >> numMeals;

    //For loop runs for as many meals input by user
    for(int i = 0; i < numMeals; i++){
        cin.ignore();
        cout << "\nWas meal " << (i+1) << " Breakfast, Lunch, Dinner, or a Snack? ";
        getline(cin, mealType);
        cout << "How many calories did " << mealType << " contain? ";
        cin >> numCals;
        totalCals += numCals;  //Add calories for meal to the total
    }
    
    //Output total calories
    cout << "\nYour total calories on the day was " << totalCals << " calories!";


    return 0;
}