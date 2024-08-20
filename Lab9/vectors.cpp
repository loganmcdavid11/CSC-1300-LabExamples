/*
 * Name: Logan McDavid
 * Filename: vectors.cpp
 * Date: 7 / 12 / 24
 * Purpose: Demonstrate how to implement
 * vectors and why we might use it
*/

//Libraries included
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

const int SIZE = 7;

//Function prototypes
void getValues(vector<int>&);
void printValues(vector<int>&);
double calcAverage(vector<int>&);
int highestTemp(vector<int>&);
int lowestTemp(vector<int>&);

int main(){
    //Variables declared
    vector<int> myValues;  //Integer vector defined
    double average = 0;
    int highest = 0, lowest = 0;

    cout << "Welcome to The Weather Report!\n\n";

    //Get temperatures
    getValues(myValues);

    //Print temperatures
    printValues(myValues);

    //Find average temperature
    average = calcAverage(myValues);
    cout << fixed << setprecision(2);
    cout << "\nThe average temperature during the week is " << average << endl;
    
    //Find highest temperature
    highest = highestTemp(myValues);
    cout << "\nThe highest temperature during the week is " << highest << endl;

    //Find lowest temperature
    lowest = lowestTemp(myValues);
    cout << "\nThe lowest temperature during the week is " << lowest << endl;


    return 0;
}

/*
 * Function: getValues
 * Purpose: Push the temperatures for
 * each day into a vector
 */
void getValues(vector<int>& vector){
    //Variables declared
    int num = 0;

    //Input temperature for each day
    for(int i = 0; i < SIZE; i++){
        cout << "Enter the temperature for day " << i + 1 << ": ";
        cin >> num;
        vector.push_back(num);  //Push value to vector
    }
}

/*
 * Function: printValues
 * Purpose: Print values pushed to
 * the vector
 */
void printValues(vector<int>& vector){
    cout << "\nHere are your temperatures for the week:\n";
    for(int i = 0; i < SIZE; i++){
        cout << "Day " << i + 1 << ": " << vector.at(i) << endl;
    }
}

/*
 * Function: calcAverage
 * Purpose: Calculate the average 
 * temperature
 */
double calcAverage(vector<int>& vector){
    //Variables declared
    int total = 0;
    double avg = 0;

    //Total the temperatures from the week
    for(int i = 0; i < SIZE; i++){
        total += vector.at(i);
    }

    //Calculate average
    avg = static_cast<double>(total) / SIZE;

    return avg;
}

/*
 * Function: highestTemp 
 * Purpose: Calculate the highest 
 * temperature
 */
int highestTemp(vector<int>& vector){
    //Set highest value to first element in vector
    int highest = vector.at(0);

    //Find highest value in vector
    for(int i = 1; i < SIZE; i++){
        //If element in vector is higher than highest variable, update temp
        if (highest < vector.at(i))
            highest = vector.at(i);
    }

    return highest;
}

/*
 * Function: lowestTemp: 
 * Purpose: Calculate the lowest
 * temperature
 */
int lowestTemp(vector<int>& vector){
    //Set lowest value to first element in vector
    int lowest = vector.at(0);

    //Find lowest value in vector
    for(int i = 1; i < SIZE; i++){
        //If element in vector is lower than lowest variable, update temp
        if(lowest > vector.at(i))
            lowest = vector.at(i);
    }

    return lowest;
}