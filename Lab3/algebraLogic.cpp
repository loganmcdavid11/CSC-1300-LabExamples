/***
 * Name: Logan McDavid
 * Filename: algebraLogic.cpp
 * Date: 5 / 6 / 24
 * Purpose: Demonstrate if statements and 
 * logical operators
*/

#include <iostream>
using namespace std;

int main(){
    //Variables declared
    int answer1 = 0, answer2 = 0, answer3 = 0;
    
    //Questions
    cout << "Welcome to basic algebra!\n";

    cout << "  Question 1: 2x + 9 = 15. What is x? ";
    cin >> answer1;

    cout << "  Question 2: 5x - 12 = 28. What is x? ";
    cin >> answer2;

    cout << "  Question 3: x^2 + 3x + 9 = 37. What is x? ";
    cin >> answer3;

    //3 out of 3 correct
    if(answer1 == 3 && answer2 == 8 && answer3 == 4){
        cout << "CONGRATS!! YOU GOT 3/3 CORRECT!";
    }
    //2 out of 3 correct
    else if(answer1 == 3 && (answer2 == 8 || answer3 == 4)){
        cout << "You got 2/3 correct!";
    }else if(answer2 == 8 && (answer1 == 3 || answer3 == 4)){
        cout << "You got 2/3 correct!";
    }else if(answer3 == 4 && (answer1 == 3 || answer2 == 8)){
        cout << "You got 2/3 correct!";
    }
    //1 out of 3 correct
    else if(answer1 == 3 || answer2 == 8 || answer3 == 4){
        cout << "You got 1/3 correct!";
    }
    //0 out of 3 correct
    else{
        cout << "You got 0/3 correct. Time to fresh'n up on those algebra skills";
    }

    return 0;
}