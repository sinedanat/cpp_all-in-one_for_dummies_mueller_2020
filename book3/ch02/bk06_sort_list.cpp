#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Collect
{
    string Name;
    int Height;
    string Location;
};

int main()
{
    vector<Collect> Collectables;
    Collectables.push_back({"Statue", 40, "Basement"});
    Collectables.push_back({"Statue", 30, "Basement"});
    Collectables.push_back({"Mirror", 54, "1st Floor"});
    Collectables.push_back({"Statue", 33, "1st Floor"});
    Collectables.push_back({"Mirror", 33, "2nd Floor"});
    Collectables.push_back({"Chair", 44, "1st Floor"});
    Collectables.push_back({"Chair", 36, "2nd Floor"});

    auto SortRule1 = [](Collect S1, Collect S2)
    {
        return S1.Location < S2.Location;
    };

    auto SortRule2 = [](Collect S1, Collect S2)
    {
        if (S1.Location != S2.Location)
            return S1.Location < S2.Location;

        return S1.Name < S2.Name;
    };

    sort(Collectables.begin(), Collectables.end(), SortRule1);

    cout << "One Column Sort" << endl;

    for (auto s : Collectables)
        cout << s.Name << "\t" << s.Height
             << "\t" << s.Location << endl;

    sort(Collectables.begin(), Collectables.end(), SortRule2);

    cout << endl << "Two Column Sort" << endl;

    for (auto s : Collectables)
        cout << s.Name << "\t" << s.Height
             << "\t" << s.Location << endl;

    return 0;
}

// One Column Sort
// Mirror  54  1st Floor
// Statue  33  1st Floor
// Chair   44  1st Floor
// Mirror  33  2nd Floor
// Chair   36  2nd Floor
// Statue  40  Basement
// Statue  30  Basement
// 
// Two Column Sort
// Chair   44  1st Floor
// Mirror  54  1st Floor
// Statue  33  1st Floor
// Chair   36  2nd Floor
// Mirror  33  2nd Floor
// Statue  40  Basement
// Statue  30  Basement
