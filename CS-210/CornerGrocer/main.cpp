/*
    main.cpp
    -----------------------------
    Corner Grocer Item Tracking Program
    -----------------------------------
    This program reads grocery item purchase records from a text file,
    counts how often each item was purchased, and provides an interactive
    menu to display item frequencies and histograms.

    Functional Menu:
    1. Look up item frequency
    2. Display all frequencies
    3. Display histogram
    4. Exit

    The program also generates a frequency.dat file as a backup.
*/

#include <iostream>
#include "ItemTracker.h"

using namespace std;

// Function to display the user menu
void DisplayMenu() {
    cout << "\n===== CORNER GROCER MENU =====" << endl;
    cout << "1. Search for an item" << endl;
    cout << "2. Display all item frequencies" << endl;
    cout << "3. Display histogram" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice (1-4): ";
}

int main() {
    // Create ItemTracker object and load items from file
    ItemTracker tracker("CS210_Project_Three_Input_File.txt");
    tracker.LoadItems();

    int menuChoice;
    string itemName;

    while (true) {
        DisplayMenu();
        cin >> menuChoice;

        // Validate menu input
        if (cin.fail()) {
            cin.clear();            // Clear error flag
            cin.ignore(1000, '\n'); // Discard invalid input
            cout << "Invalid input. Please enter a number from 1 to 4." << endl;
            continue;
        }

        switch (menuChoice) {
        case 1:
            cout << "Enter the item name: ";
            cin >> itemName;
            cout << itemName << " was purchased "
                 << tracker.GetItemFrequency(itemName)
                 << " time(s)." << endl;
            break;

        case 2:
            tracker.PrintAllItems();
            break;

        case 3:
            tracker.PrintHistogram();
            break;

        case 4:
            cout << "Exiting program. Goodbye!" << endl;
            return 0;

        default:
            cout << "Invalid option. Please select 1-4." << endl;
        }
    }
}
