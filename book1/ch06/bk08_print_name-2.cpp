#include <iostream>

using namespace std;

void PrintName(string first, string last)
{
    string fullname = first + " " + last;
    cout << fullname << endl;
}

int main()
{
    string fullname = "Abraham Lincoln";
    PrintName("Thomas", "Jefferson");
    cout << fullname << endl;

    return 0;
}

// Thomas Jefferson
// Abraham Lincoln
