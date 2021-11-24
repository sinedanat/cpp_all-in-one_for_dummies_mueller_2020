#include <iostream>
#include <string>
#include <optional>

using namespace std;

void myFunction(optional<string> name = nullopt)
{
    if (name == nullopt)
    {
        cout << "I wish I knew your name!" << endl;
    }
    else
    {
        cout << "Hello " << name.value() << "!" << endl;
    }
}

int main()
{
    myFunction();
    myFunction("Sarah");

    return 0;
}

// I wish I knew your name!
// Hello Sarah!
