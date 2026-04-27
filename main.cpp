#include <iostream>
#include "Itemtracker.h"

using namespace std;

int main() {
    ItemTracker tracker;
    int choice = 0;
    string searchItem;

    tracker.LoadData("CS210_Project_Three_Input_File.txt");
    tracker.SaveData("frequency.dat");

    while (choice != 4) {
        cout << "\n--- Corner Grocer Item Tracker ---" << endl;
        cout << "1. Look up an item frequency" << endl;
        cout << "2. Print all item frequencies" << endl;
        cout << "3. Print histogram" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        
        if (!(cin >> choice)) {
            cout << "Please enter a valid number (1-4)." << endl;
            cin.clear();
            cin.ignore(100, '\n');
            continue;
        }

        switch (choice) {
            case 1:
                cout << "Enter the item name: ";
                cin >> searchItem;
                cout << searchItem << " appears " << tracker.GetItemFrequency(searchItem) << " times." << endl;
                break;
            case 2:
                tracker.PrintAllFrequencies();
                break;
            case 3:
                tracker.PrintHistogram();
                break;
            case 4:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
    return 0;
}
