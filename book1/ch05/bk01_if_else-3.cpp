#include <iostream>

using namespace std;

int main()
{
    int i;
    cout << "Type any number: ";
    cin >> i;

    if (i > 100)
    {
        cout << "It's greater than 100." << endl;
    }
    else if (i > 10)
    {
        cout << "It's greater than 10" << endl;
    }
    else
    {
        cout << "It's neither greater than 100 nor greater than 10." << endl;
    }

    return 0;
}

// Type any number: 123
// It's greater than 100.

// Type any number: 12
// It's greater than 10

// Type any number: 7
// It's neither greater than 100 nor greater than 10.
