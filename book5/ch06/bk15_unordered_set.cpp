#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main()
{
    unordered_set<string> Colors;
    Colors.insert("Red");
    Colors.insert("Green");
    Colors.insert("Blue");

    if (Colors.find("Red") != Colors.cend())
        cout << "Found Red!" << endl;

    auto ReturnValue = Colors.emplace("Red");

    if (!ReturnValue.second)
        cout << "Red is Already in Set!" << endl;

    cout << "There are " << Colors.count("Red")
         << " Red entries." << endl;

    ReturnValue = Colors.emplace("Orange");

    if (!ReturnValue.second)
        cout << "Orange is Already in Set!" << endl;
    else
        cout << "Orange Added to Set!" << endl;

    Colors.erase("Red");

    if (Colors.find("Red") != Colors.cend())
        cout << "Found Red!" << endl;
    else
        cout << "Red Missing!" << endl;

    return 0;
}

// Found Red!
// Red is Already in Set!
// There are 1 Red entries.
// Orange Added to Set!
// Red Missing!
