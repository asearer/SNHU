/*
ItemTracker.h
    -----------------------------
    Header file for the ItemTracker class used by the Corner Grocer program.

    Responsibilities:
    - Read grocery item data from an input file.
    - Count occurrences of each item.
    - Provide methods for looking up, displaying, and saving item frequencies.
*/

#ifndef ITEMTRACKER_H
#define ITEMTRACKER_H

#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

class ItemTracker {
private:
    map<string, int> itemFrequency;  // Stores each item and its frequency count
    string inputFileName;            // Name of input file

public:
    // Constructor initializes input file name
    ItemTracker(string fileName);

    // Loads items from the input file and populates the map
    void LoadItems();

    // Returns frequency count for a specific item
    int GetItemFrequency(const string& item);

    // Displays all items and their frequency counts
    void PrintAllItems();

    // Displays a histogram using asterisks for counts
    void PrintHistogram();

    // Writes item frequencies to a backup file (frequency.dat)
    void WriteBackupFile();
};

#endif
