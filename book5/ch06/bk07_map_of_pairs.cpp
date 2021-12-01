#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    map<string, int> data;

    data["Sam"] = 1;
    data["Bob"] = 11;
    data["Tom"] = 111;
    data["Ann"] = 1111;

    // When you iterate through map, you get back a pair of things
    // - the key and the value together. These objects live inside
    // an instance of a template class called Pair,
    // which has two properties, first and second.
    for (auto elem : data)
    {
        cout << elem.first << ": " << elem.second << endl;
    }

    cout << endl;

    // Be careful - Pair is the internal storage bin inside map.
    // You're not looking at copies.
    // you/re looking at the actual data in map.
    // If you change the data.
    for (auto elem : data)
    {
        elem.second *= 2;
        cout << elem.first << ": " << elem.second << endl;
    }

    return 0;
}

// Ann: 1111
// Bob: 11
// Sam: 1
// Tom: 111
//
// Ann: 2222
// Bob: 22
// Sam: 2
// Tom: 222
