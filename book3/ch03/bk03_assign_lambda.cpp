#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    auto greater = [](auto x, auto y)
    {
        return x > y;
    };

    map<string, int, decltype(greater)> MyMap1;

    MyMap1.insert(pair<string, int>("D", 12));
    MyMap1.insert(pair<string, int>("B", 4));
    MyMap1.insert(pair<string, int>("C", 8));
    MyMap1.insert(pair<string, int>("A", 1));

    cout << "MyMap1 Content" << endl;

    for (auto element : MyMap1)
        cout << element.first << "\t" << element.second << endl;

    map<string, int, decltype(greater)> MyMap2;

    // What's especially interesting is that you can assign MyMap1 to MyMap2.
    // However, MyMap2 is now copied from MyMap1.
    // However, the content of MyMap1 and MyMap2 become separate
    // after the copy process so that changes made to MyMap1
    // and MyMap2 are different beyond that point.
    MyMap2 = MyMap1;

    // Insert in MyMap1.
    MyMap1.insert(pair<string, int>("E", 23));

    // Insert in MyMap2.
    MyMap2.insert(pair<string, int>("F", 35));

    cout << endl;
    cout << "MyMap2 Content" << endl;

    for (auto element : MyMap2)
        cout << element.first << "\t" << element.second << endl;

    cout << endl;
    cout << "MyMap1 Content" << endl;

    for (auto element : MyMap1)
        cout << element.first << "\t" << element.second << endl;
}

// MyMap1 Content
// D   12
// C   8
// B   4
// A   1
// 
// MyMap2 Content
// F   35
// D   12
// C   8
// B   4
// A   1
// 
// MyMap1 Content
// E   23
// D   12
// C   8
// B   4
// A   1
