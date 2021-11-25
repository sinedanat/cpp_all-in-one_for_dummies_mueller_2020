#include <iostream>
#include <string>
#include <list>
#include <algorithm>

using namespace std;

struct AnimalEntry
{
    string Name;
    int CageLocation;
};

class StoreAnimals
{
public:
    void FindAnimals(string Name);
    list<AnimalEntry> Animals;
};

void StoreAnimals::FindAnimals(string FindName)
{
    for_each(Animals.cbegin(),
             Animals.cend(),
             [FindName](AnimalEntry ThisEntry)
    {
        if (FindName == ThisEntry.Name)
        {
            cout << ThisEntry.CageLocation << endl;
        }
    });
}

int main()
{
    StoreAnimals Zoo;

    Zoo.Animals.push_back(AnimalEntry{"Hippo", 300});
    Zoo.Animals.push_back(AnimalEntry{"Tiger", 301});
    Zoo.Animals.push_back(AnimalEntry{"Tiger", 302});
    Zoo.Animals.push_back(AnimalEntry{"Zebra", 303});

    cout << "Finding hippo cages." << endl;
    Zoo.FindAnimals("Hippo");

    cout << "Finding tiger cages." << endl;
    Zoo.FindAnimals("Tiger");

    return 0;
}

// Finding hippo cages.
// 300
// Finding tiger cages.
// 301
// 302
