#include <iostream>
#include <string>

using namespace std;

int main()
{
    string OriginalString = "Hello";

    const string& StringCopyConst(OriginalString);
    OriginalString = "Goodbye";
    // StringCopyConst = "Wow!"; // Error!

    cout << OriginalString << endl;
    cout << StringCopyConst << endl;

    return 0;
}

// Goodbye
// Goodbye
