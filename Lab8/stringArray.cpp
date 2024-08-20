/*
 * Name: Logan McDavid
 * Filename: array.cpp
 * Date: 6 / 22 / 24
 * Purpose: Demonstrate how to implement
 * an array of strings
*/

//Libraries included
#include <iostream>
using namespace std;

//Function prototypes
void displayLibrary(string[], int);
void updateLibrary(string[], int);

int main(){
    //Variables declared
    const int libSize = 5;
    int choice = 0;

    //String array of books
    string library[libSize] = {"Book 1", "Book 2", "Book 3", "Book 4", "Book 5"};

    //Menu
    cout << "Welcome to my library!\nMy library can hold only 5 books so choose wisely!\n";
    do{
        cout << "\nWhat would you like to do?\n";
        cout << "  1. Display library\n";
        cout << "  2. Update library\n";
        cout << "  3. Exit library\n";
        cout << "Choose 1 - 3: ";
        cin >> choice;
        //Input validation
        while(choice < 1 || choice > 3){
            cout << "Invalid choice, please try again.\n";
            cout << "Choose 1 - 3: ";
            cin >> choice;
        }

        cout << endl;

        //Switch statement for menu
        switch(choice){
            case 1: 
                //Call displayLibrary function
                displayLibrary(library, libSize);
                break;
            case 2: 
                //Call updateLibrary Function
                updateLibrary(library, libSize);
                break;

            default: 
                break;
        }

    }while(choice != 3);

    //Exit program
    cout << "Goodbye!";
    return 0;
}

/*
 * Function: displayLibrary
 * Purpose: Print out the current library
 * to the screen
*/
void displayLibrary(string books[], int size){
    for(int i = 0; i < size; i++){
        cout << i+1 << ": " << books[i] << endl; 
    }
}

/*
 * Function: updateLibrary
 * Purpose: Replace and add a new book to 
 * the library
*/
void updateLibrary(string books[], int size){
    //Variables declared
    int bookValue = 0;
    string newBook;

    //Choose which book to update
    cout << "Which book would you like to update?\n";
    cout << "Please enter the number associated with said book (-1 if you change your mind): ";
    cin >> bookValue;
    //Input validation (Also must not be -1)
    while((bookValue < 1 || bookValue > size) && bookValue != -1){
        cout << "\nInvalid choice, please try again.\n";
        cout << "Please enter the number associated with said book: (-1 if you change your mind): ";
        cin >> bookValue;
    }

    //User changes their mind and doesn't update library
    if(bookValue == -1)
        cout << "\nGood call!\n";
    //Add your new book to library
    else{
        cin.ignore();
        cout << "\nWhat book would you like to replace " << books[bookValue - 1] << " with? ";
        getline(cin, newBook);
        books[bookValue - 1] = newBook;
    }
}