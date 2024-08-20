/*
 * Name: Logan McDavid
 * Filename: driver.cpp
 * Date: 6 / 10 / 24
 * Purpose: Demonstrate how to separate a program
 * into multiple files
 * Demonstrate how to pass variables by reference
 * in functions
*/

//INCLUDE HEADER FILE
#include "header.h"


int main(){
    //Variables declared
    int fightValue = 0, wins1 = 0, wins2 = 0, wins3 = 0;
    bool oppWin;
    char fightAgain;
    int randRet = 0;
    string myFighter, opponentName;

    srand(time(0));  //Necessary in order to randomize numbers
    
    //Welcome message
    cout << "Welcome to fight club! (shhh don't let anyone hear that)\n\n";

    do{
    //Call fighter function
    fightValue = fighter();

    //Call opponent value
    opponent(fightValue, opponentName, randRet);

    //Display fighter based on return value of fighter function
    if(fightValue == 1){
        cout << "You have selected " << fighter1 << "!\n";
        //Call fighter function
        fight(fighter1, opponentName, fightValue, wins1, oppWin);
        //Tally win for opponent
        if(oppWin == true && randRet == 0)
            wins2++;
        else if(oppWin == true && randRet == 1)
            wins3++;
        
    }else if(fightValue == 2){
        cout << "You have selected " << fighter2 << "!\n";
        //Call fighter function
        fight(fighter2, opponentName, fightValue, wins2, oppWin);
        //Tally win for opponent
        if(oppWin == true && randRet == 0)
            wins1++;
        else if(oppWin == true && randRet == 1)
            wins3++;
    }else{
        cout << "You have selected " << fighter3 << "!\n";
        //Call fighter function
        fight(fighter3, opponentName, fightValue, wins3, oppWin);
        //Tally win for opponent
        if(oppWin == true && randRet == 0)
            wins1++;
        else if(oppWin == true && randRet == 1)
            wins2++;
    }

    //Call displayWins function
    displayWins(wins1, wins2, wins3);

    //Ask if user would like to fight again
    cout << "\nWould you like to fight again? (y or n): ";
    cin >> fightAgain;
    cout << endl;
    
    //Repeat do-while loop if user agrees to fight again
    }while(tolower(fightAgain) == 'y');


    return 0;
}