/*
 * Name: Logan McDavid
 * Filename: dynAllocArrOfPtrs.cpp
 * Date: 8 / 12 / 24
 * Purpose: Demonstrate dynamic memory allocation
 * of array of pointers and why we might use it
 */

//Libraries included
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    //Variables declared
    int numTeams = 0;
    int numMatches = 0;

    cout << "Welcome to Tournament Score Tracker!\n\n";

    //Input number of teams
    cout << "Enter the number of teams: ";
    cin >> numTeams;

    //Inptut number of matches 
    cout << "Enter the number of matches: ";
    cin >> numMatches;
    cin.ignore();

    //Dynamically allocate an array of team names
    string* teamNames = new string[numTeams];

    //Dynamically allocate an array of pointers to arrays of integers for scores
    int** scores = new int*[numTeams];
    for(int i = 0; i < numTeams; i++){
        scores[i] = new int[numMatches]; // Allocate memory for scores of each match
    }

    //Input team names
    for(int i = 0; i < numTeams; ++i) {
        cout << "Enter name for team " << i + 1 << ": ";
        getline(cin, teamNames[i]);
    }

    //Input scores for each match
    for(int match = 0; match < numMatches; match++){
        cout << "\nEnter scores for match " << match + 1 << ":\n";
        for(int team = 0; team < numTeams; team++) {
            cout << "Score for " << teamNames[team] << ": ";
            cin >> scores[team][match];
        }
    }

    //Display results
    cout << "\nTournament Results:\n";
    cout << left << setw(20) << "Team" << "Average Score" << endl;
    cout << "------------------------------\n";
    
    for (int i = 0; i < numTeams; ++i) {
        int totalScore = 0;
        for (int j = 0; j < numMatches; ++j) {
            totalScore += scores[i][j];
        }
        float averageScore = totalScore / static_cast<float>(numMatches);
        cout << left << setw(20) << teamNames[i] << averageScore << endl;
    }

    //Free the dynamically allocated memory
    for (int i = 0; i < numTeams; ++i) {
        delete[] scores[i];  //Free memory for each team's scores
    }
    delete[] scores;    //Free memory for the array of pointers
    delete[] teamNames; //Free memory for the array of team names

    return 0;
}

