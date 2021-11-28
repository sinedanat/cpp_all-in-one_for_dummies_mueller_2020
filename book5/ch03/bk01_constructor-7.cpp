#include <iostream>
#include <string>

using namespace std;

class MyName
{
public:
    string First;

    MyName(string TheFirst) : First(TheFirst) {}
};

void WriteName(MyName name)
{
    cout << "Hi I am " << name.First << endl;
}

int main()
{
    // This line doesn't work.
    // Error - No matching function for call to 'WriteName'.
    // WriteName("George");

    // This line does work.
    WriteName(string("George"));

    return 0;
}

// Hi I am George
