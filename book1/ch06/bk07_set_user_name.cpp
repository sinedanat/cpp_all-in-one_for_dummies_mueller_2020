#include <iostream>
#include <string>

using namespace std;

void SetUsername(string newname)
{
    cout << "New user is " << newname << endl;
}

int main()
{
    SetUsername("Harold");

    return 0;
}

// New user is Harold
