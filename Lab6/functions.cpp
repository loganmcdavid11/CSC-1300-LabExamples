/***
 * Name: Logan McDavid
 * Filename: functions.cpp
 * Date: 5 / 10 / 24
 * Purpose: Practice using functions of void 
 * and non-void type
*/

//Libraries included
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>
using namespace std;

//Global variables
const string fighter1 = "Kendrick Lamar", fighter2 = "Drake", fighter3 = "J.Cole";
const string weapon1 = "Black Panther's Vibranium Daggers", 
weapon2 = "a Heart-Shaped Gavel", weapon3 = "Basketball Sharpshooter";

//FUNCTION PROTOTYPES
int fighter();
string opponent(int);
void fight(string, string, int);

//Main funciton
int main(){
    //Variables declared
    int fightValue = 0;
    string myFighter, opponentName;
    srand(time(0));  //Necessary in order to randomize numbers
    
    //Welcome message
    cout << "Welcome to fight club! (shhh don't let anyone hear that)\n\n";

    //Call fighter function
    fightValue = fighter();

    //Call opponent value
    opponentName = opponent(fightValue);

    //Display fighter based on return value of fighter function
    if(fightValue == 1){
        cout << "You have selected " << fighter1 << "!\n";
        //Call fighter function
        fight(fighter1, opponentName, fightValue);
    }else if(fightValue == 2){
        cout << "You have selected " << fighter2 << "!\n";
        //Call fighter function
        fight(fighter2, opponentName, fightValue);
    }else{
        cout << "You have selected " << fighter3 << "!\n";
        //Call fighter function
        fight(fighter3, opponentName, fightValue);
    }
    
    return 0;
}

/***
 * Function: fighter
 * Purpose: Choose your fighter and return value associated with fighter
*/
int fighter(){
    //Variables declared
    int choice = 0;

    //List of fighters
    cout << "Choose your fighter: \n";
    cout << "  1. " << fighter1 << " with " << weapon1 << endl;
    cout << "  2. " << fighter2 << " with " << weapon2 << endl;
    cout << "  3. " << fighter3 << " with " << weapon3 << endl;
    //Input choice
    cout << "Choose 1 - 3: ";
    cin >> choice;

    //Input validation
    while(choice < 1 || choice > 3){
        cout << "\nInvalid choice. Please enter a value 1 - 3: ";
        cin >> choice;
    }

    cout << endl;
    return choice;
}

/**
 * Function: opponent
 * Purpose: Randomly choose an opponent for our fighter
*/
string opponent(int fighterValue){
    int randOpp = 0;
    string opponent;

    //Randomly generate who opponent is fighting
    randOpp = rand() % 2;

    switch(fighterValue){
        case 1: 
            if(randOpp == 0)
                opponent = fighter2;
            else
                opponent = fighter3;
            break;
        case 2:
            if(randOpp == 0)
                opponent = fighter1;
            else
                opponent = fighter3;
            break;
        case 3:
            if(randOpp == 0)
                opponent = fighter1;
            else
                opponent = fighter2;
            break;
            
    }

    return opponent;
}

/***
 * Function: fight
 * Purpose: Randomize the fighters opponent and
 * fight round-to-round until one is defeated
*/
void fight(string fighter, string opponent, int fighterValue){
    //Variables declared
    int randFighterDmg = 0, randOppDmg = 0;
    int fighterHealth = 30, opponentHealth = 30, round = 1;
    bool endRounds = false;
    char y;

    //Display opponents opponent
    cout << fighter << " has challenged " << opponent << "!\n";

    //Loop while at least both opponents are alive
    do{
        //Round number and fighter's health
        cout << "\nROUND " << round << endl;
        cout << fighter << "'s Health: " << fighterHealth << endl;
        cout << opponent << "'s Health: " << opponentHealth << endl << endl;
                
        //Randomize damage 1 - 10 for fighter
        randFighterDmg = rand()%(10)+1;
        //Randomize damage 1 - 7 for opponent
        randOppDmg = rand()%(7)+1;

        //Calculate health
        fighterHealth -= randOppDmg;
        opponentHealth -= randFighterDmg;

        //Prevent displaying negative health
        if(fighterHealth < 0)
            fighterHealth = 0;
        if(opponentHealth < 0)
            opponentHealth = 0;

        //Damage and Health to and for fighters
        cout << fighter << " did " << randFighterDmg << " damage to " << opponent << endl;
        cout << opponent << " is now at " << opponentHealth << " HP\n";
        cout << opponent << " did " << randOppDmg << " damege to " << fighter << endl;
        cout << fighter << " is now at " << fighterHealth << " HP\n";

        //If one or more of the fighters lost, then skip prompt to move to next round
        if(fighterHealth <= 0 || opponentHealth <= 0)
            endRounds = true;
                    
        //Continue to next round
        if(endRounds == false){
            round++;
            cout << "\nBegin round " << round << "? (Enter y): ";
            cin >> y;
            if(tolower(y) != 'y')
                cout << "You can't tap out of this fight, its FIGHT CLUB.\n";

        }

    }while(fighterHealth > 0 && opponentHealth > 0);
                

    //Determine which fighter won
    if(fighterHealth == 0 && opponentHealth == 0){
        cout << "IT IS A DRAW!\n";
    }else if(fighterHealth > opponentHealth){
        cout << fighter << " HAS BEAT " << opponent << "!\n";
        cout << "YOU WIN!\n";
    }else{
        cout << opponent << " HAS BEAT " << fighter << "!\n";
        cout << "You lose...\n";
    }
}

