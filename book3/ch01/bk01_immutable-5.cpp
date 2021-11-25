#include <iostream>

using namespace std;

struct Immutable
{
    // Allow internal changes to val.
    mutable int val{1};
    // Disallow internal changes to val.
    //int val{1};

    // Use this declaration for a unchangeable name.
    //void SayHi(const string Name) const {
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
    // Comment out this call to get rid of the
    // external error message.
    //Test.ChangeVal();
    Test.SayHi("Sam");

    return 0;
}

// Smith2
