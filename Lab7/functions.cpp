/*
 * Name: Logan McDavid
 * Filename: functions.cpp
 * Date: 6 / 10 / 24
 * Purpose: Demonstrate how to separate a program
 * into multiple files
 * Demonstrate how to pass variables by reference
 * in functions
*/

#include "header.h"


/*
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

/*
 * Function: opponent
 * Purpose: Randomly choose an opponent for our fighter
*/
void opponent(int fighterValue, string& opponent, int& randOpp){
    randOpp = 0;

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

}

/*
 * Function: fight
 * Purpose: Randomize the fighters opponent and
 * fight round-to-round until one is defeated.
 * Tally wins for fighter or opponent.
*/
void fight(string fighter, string opponent, int fighterValue, int& fightWinCount, bool& oppWin){
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
        cout << "IT IS A DRAW!\n\n";
    }else if(fighterHealth > opponentHealth){
        cout << fighter << " HAS BEAT " << opponent << "!\n";
        cout << "YOU WIN!\n\n";
        //Tally fighter win counter and set opponent win to false
        fightWinCount++;
        oppWin = false;
    }else{
        cout << opponent << " HAS BEAT " << fighter << "!\n";
        cout << "You lose...\n\n";
        //Set opponent win to true
        oppWin = true;
    }
}

/**
 * Function: displayWins
 * Purpose: Display the total number of wins each fighter has
*/
void displayWins(int wins1, int wins2, int wins3){
    cout << fighter1 << "'s WINS: " << wins1 << endl;
    cout << fighter2 << "'s WINS: " << wins2 << endl;
    cout << fighter3 << "'s WINS: " << wins3 << endl;
}
