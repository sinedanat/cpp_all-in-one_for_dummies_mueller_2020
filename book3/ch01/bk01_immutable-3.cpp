#include <iostream>
#include <string>

using namespace std;

struct Immutable
{
    // Allow internal changes to val.
    mutable int val{1};

    // Use this declaration for a changeable name.
    void SayHi(string Name) const
    {
        Name = "Smith";
        val = 2;
        cout << Name << val << endl;
    }

    void ChangeVal()
    {
        val = 3;
        cout << val << endl;
    }
};

int main()
{
    const Immutable Test;

    // Error - 'this' argument to member function 'ChangeVal'
    // has type 'const Immutable', but function is not marked const.
    Test.ChangeVal();
    Test.SayHi("Sam");

    return 0;
}

//
