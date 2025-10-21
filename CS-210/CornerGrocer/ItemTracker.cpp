/*
    Created by Alonza Searer on 10/15/25.


    ItemTracker.cpp
    -----------------------------
    Implements the ItemTracker class for the Corner Grocer program.
*/

#include "ItemTracker.h"

// Constructor: sets the name of the input file
ItemTracker::ItemTracker(string fileName) {
    inputFileName = fileName;
}

// Loads all items from the input file and counts their frequencies
void ItemTracker::LoadItems() {
    ifstream inFile(inputFileName);

    if (!inFile.is_open()) {
        cout << "Error: Could not open input file '" << inputFileName << "'." << endl;
        return;
    }

    string item;
    while (inFile >> item) {
        itemFrequency[item]++;  // Increment the count for this item
    }

    inFile.close();

    // Automatically write backup data file
    WriteBackupFile();
}

// Returns frequency count for a given item
int ItemTracker::GetItemFrequency(const string& item) {
    if (itemFrequency.find(item) != itemFrequency.end()) {
        return itemFrequency[item];
    } else {
        return 0; // Item not found
    }
}

// Prints all items and their counts
void ItemTracker::PrintAllItems() {
    cout << "\n===== ITEM FREQUENCIES =====" << endl;
    for (auto& pair : itemFrequency) {
        cout << pair.first << " " << pair.second << endl;
    }
}

// Prints histogram of items using asterisks to represent frequency
void ItemTracker::PrintHistogram() {
    cout << "\n===== PURCHASE HISTOGRAM =====" << endl;
    for (auto& pair : itemFrequency) {
        cout << pair.first << " ";
        for (int i = 0; i < pair.second; ++i) {
            cout << "*";
        }
        cout << endl;
    }
}

// Writes backup file containing all items and their frequencies
void ItemTracker::WriteBackupFile() {
    ofstream outFile("frequency.dat");

    if (!outFile.is_open()) {
        cout << "Error: Could not create output file 'frequency.dat'." << endl;
        return;
    }

    for (auto& pair : itemFrequency) {
        outFile << pair.first << " " << pair.second << endl;
    }

    outFile.close();
}
