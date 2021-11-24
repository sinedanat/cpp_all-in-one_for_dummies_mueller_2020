#include <iostream>
#include <string>

using namespace std;

int main()
{
    string OriginalString = "Hello";

    const string& StringCopyConst(OriginalString);
    string& StringCopy(OriginalString);
    OriginalString = "Goodbye";

    cout << OriginalString << endl;
    cout << StringCopyConst << endl;
    cout << StringCopy << endl;

    // StringCopyConst = "Wow!"; // Error!
    StringCopy = "Bye-bye!";

    cout << endl;

    cout << OriginalString << endl;
    cout << StringCopyConst << endl;
    cout << StringCopy << endl;

    return 0;
}

// Goodbye
// Goodbye
// Goodbye

// Bye-bye!
// Bye-bye!
// Bye-bye!
