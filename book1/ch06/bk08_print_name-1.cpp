#include <iostream>
#include <string>

using namespace std;

void PrintName(string first, string last)
{
    string fullname = first + " " + last;
    cout << fullname << endl;
}

int main()
{
    PrintName("Thomas", "Jefferson");

    return 0;
}

// Thomas Jefferson
