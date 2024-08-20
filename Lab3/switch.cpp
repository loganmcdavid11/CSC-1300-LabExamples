/*
 * Name: Logan McDavid
 * Filename: switch.cpp
 * Date: 5 / 6 / 24
 * Purpose: Demonstrate how to implement a 
 * switch statement 
*/

#include <iostream>
using namespace std;

int main(){
    //Variables declared
    int choice = 0;

    //Weapon menu
    cout << "Welcome to One-Shot Monster Slayer!\n";
    cout << "  1. Sythe\n";
    cout << "  2. Bow and Arrow\n";
    cout << "  3. Flaming Axe\n";
    cout << "  4. Legendary Scar\n";
    cout << "  5. Infinity Gavel\n";
    cout << "Please enter the value associated with your weapon of choice: ";
    cin >> choice;

    //Prompt monster
    cout << "\nThe Monster is a RADIOACTIVE POLAR BEAR!\n\n";

    //Switch statement for choice
    switch(choice){
        //Choice 1
        case 1: 
            cout << "You tried to throw the sythe at the polar bear..."
            << "\nand somehow it boomeranged back and hit the off button"
            << "\non his back. YOU WIN!";
            break;
        //Choice 2
        case 2: 
            cout << "You brought a bow and arrow! The polar bear takes your "
            << "\nbow and uses it to catch fish. Its best you walk away now..."
            << "\nYou Lose...";
            break;
        //Choice 3
        case 3: 
            cout << "You brought a flaming axe! Everyone knows ice type's have "
            << "\na weakness to fire! However its radioactive so it does not "
            << "\naffect the bear. You Lose...";
            break;
        //Choice 4
        case 4: 
            cout << "As you proceed to crank 90's on the polar bear, it becomes flustered"
            << "\nIt is not boxed up and you manage to win with the legendary scar. YOU WIN!";
            break;
        //Choice 5
        case 5: 
            cout << "Choosing a weapon from Stardew Valley? Respectable, but"
            << "\nyou dont have any enchants and it is not enough to slay the polar bear. You Lose...";
            break;
        //Invalid choice 
        default:
            cout << "Failed to enter a valid value. Try harder";
            break;
    }

    return 0;
}