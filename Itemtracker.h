#ifndef ITEMTRACKER_H
#define ITEMTRACKER_H

#include <map>
#include <string>

class ItemTracker {
public:
    void LoadData(std::string filename);
    int GetItemFrequency(std::string item);
    void PrintAllFrequencies();
    void PrintHistogram();
    void SaveData(std::string filename);

private:
    std::map<std::string, int> itemCounts;
};

#endif