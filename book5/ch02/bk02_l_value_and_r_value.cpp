#include <iostream>

using namespace std;

int uggle;

int& ChangeMe()
{
    return uggle;
}

int main()
{
    ChangeMe() = 10;
    
    cout << ChangeMe() << endl;

    return 0;
}

// 10
