#include <iostream>
#include <string>

using namespace std;

void Inner()
{
    throw string("Error!");
}

void Outer()
{
    try
    {
        Inner();
    }
    catch (string excep)
    {
        cout << "Outer caught an exception: ";
        cout << excep << endl;

        // When inside a catch block,
        // a throw statement without anything after it
        // simply rethrows the same exception.
        throw;
    }
}

int main()
{
    try
    {
        Outer();
    }
    catch (string excep)
    {
        cout << "main caught an exception: ";
        cout << excep << endl;
    }

    return 0;
}

// Outer caught an exception: Error!
// main caught an exception: Error!
