/*
 * Name: Logan McDavid
 * Filename: array.cpp
 * Date: 7 / 2 / 24
 * Purpose: Demonstrate how to implement
 * an array and why we might use it.
*/

//Libraries included
#include <iostream> 
#include <iomanip>
using namespace std;

//Constant variable for size of array
const int SIZE = 7;

//Function prototypes
double calcAverage(int[]);
int highestTemp(int[]);
int lowestTemp(int[]);

int main(){
    //Variables declared
    int tempArray[SIZE];  //Array that can contain up to 7 elements
    double average = 0;
    int highest = 0, lowest = 0;

    cout << "Welcome to The Weather Report!\n\n";
    
    //Input temperature for each day
    for(int i = 0; i < SIZE; i++){
        cout << "Enter the temperature for day " << i+1 << ": ";
        cin >> tempArray[i];
    }

    //Output temperature for each day
    cout << "\nHere are your temperatures for the week:\n";
    for(int i = 0; i < SIZE; i++){
        cout << "Day " << i+1 << ": " << tempArray[i] << endl;
    }

    //Calculate average temperature
    average = calcAverage(tempArray);
    cout << fixed << setprecision(2);
    cout << "\nThe average temperature during the week is " << average << endl;
    
    //Find highest temperature
    highest = highestTemp(tempArray);
    cout << "\nThe highest temperature during the week is " << highest << endl;

    //Find lowest temperature
    lowest = lowestTemp(tempArray);
    cout << "\nThe lowest temperature during the week is " << lowest << endl;

    return 0;
}

/*
 * Function: calcAverage
 * Purpose: Calculate the average temperature 
 * for the week
*/
double calcAverage(int arr[]){
    //Variables declared
    int total = 0;
    double avg = 0;

    //Total the temperatures from the week
    for(int i = 0; i < SIZE; i++){
        total += arr[i];
    }

    //Calculate average
    avg = static_cast<double>(total) / SIZE;

    return avg;
}

/*
 * Function: highestTemp
 * Purpose: Find the highest temperature 
 * for the week
*/
int highestTemp(int arr[]){
    //Set highest to the first element in array
    int highest = arr[0];

    //Compare each value of the array to highest temperature
    for(int i = 1; i < SIZE; i++){
        //If element in array is higher than highest variable, update temp
        if(highest < arr[i])
            highest = arr[i];
    }

    return highest;
}

/*
 * Function: lowestTemp
 * Purpose: Find the lowest temperature
 * for the week
*/
int lowestTemp(int arr[]){
    //Set lowest to the first element in array
    int lowest = arr[0];

    //Compare each value of the array to lowest temperature
    for(int i = 1; i < SIZE; i++){
        //If element in array is lower than lowest variable, update temp
        if(lowest > arr[i])
            lowest = arr[i];
    }

    return lowest;
}