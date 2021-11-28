#include <iostream>
#include <string>

using namespace std;

void WriteMe(string str)
{
    cout << "Here I am: " << str << endl;
}

int main()
{
    WriteMe(string("Sam"));
    WriteMe("Ed");

    return 0;
}

// Here I am: Sam
// Here I am: Ed
