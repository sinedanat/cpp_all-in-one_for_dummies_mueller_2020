#include <iostream>
#include <string>
#include <map>

using namespace std;

class MyClass
{
public:
    string Name;

    operator const char*() const
    {
        return Name.c_str();
    }
};

// Function object.
class MyLess
{
public:
    bool operator()(const MyClass& x, const MyClass& y) const
    {
        return x.Name < y.Name;
    }
};

int main()
{
    map<MyClass, int, MyLess> family;

    MyClass key1 = {"Ed"};
    int age1 = 50;
    MyClass key2 = {"Sveta"};
    int age2 = 50;
    MyClass key3 = {"Anna"};
    int age3 = 24;

    family[key1] = age1;
    family[key2] = age2;
    family[key3] = age3;

    for (auto elem : family)
        cout << elem.first << ": " << elem.second << endl;

    return 0;
}

// Anna: 24
// Ed: 50
// Sveta: 50
