#include "Itemtracker.h"
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void ItemTracker::LoadData(string filename) {
    ifstream inputFile(filename);
    string itemName;
    if (!inputFile.is_open()) {
        cout << "Error: Could not open input file." << endl;
        return;
    }
    while (inputFile >> itemName) {
        itemCounts[itemName]++;
    }
    inputFile.close();
}

int ItemTracker::GetItemFrequency(string item) {
    if (itemCounts.count(item)) {
        return itemCounts[item];
    }
    return 0;
}

void ItemTracker::PrintAllFrequencies() {
    for (auto const& [item, count] : itemCounts) {
        cout << item << " " << count << endl;
    }
}

void ItemTracker::PrintHistogram() {
    for (auto const& [item, count] : itemCounts) {
        cout << left << setw(12) << item << " ";
        for (int i = 0; i < count; ++i) {
            cout << "*";
        }
        cout << endl;
    }
}

void ItemTracker::SaveData(string filename) {
    ofstream outputFile(filename);
    if (outputFile.is_open()) {
        for (auto const& [item, count] : itemCounts) {
            outputFile << item << " " << count << endl;
        }
        outputFile.close();
    }
}
