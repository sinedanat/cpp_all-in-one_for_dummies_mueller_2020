#include <iostream>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

void ShowContents(set<string>* myset)
{
    set<string>::iterator iter = myset->begin();

    while (iter != myset->end())
    {
        cout << *iter << endl;
        iter++;
    }
}

int main()
{
    set<string> English;
    English.insert("Zeus");
    English.insert("Magellan");
    English.insert("Vulcan");
    English.insert("Ulysses");
    English.insert("Columbus");

    set<string> History;
    History.insert("Vulcan");
    History.insert("Ulysses");
    History.insert("Ra");
    History.insert("Odin");

    set<string> Intersect;
    set_intersection(English.begin(),
                     English.end(),
                     History.begin(),
                     History.end(),
                     inserter(Intersect, Intersect.begin()));
    cout << "===Intersection===" << endl;
    ShowContents(&Intersect);

    set<string> Union;
    set_union(English.begin(),
              English.end(),
              History.begin(),
              History.end(),
              inserter(Union, Union.begin()));
    cout << endl << "===Union===" << endl;
    ShowContents(&Union);

    return 0;
}

// ===Intersection===
// Ulysses
// Vulcan
// 
// ===Union===
// Columbus
// Magellan
// Odin
// Ra
// Ulysses
// Vulcan
// Zeus
