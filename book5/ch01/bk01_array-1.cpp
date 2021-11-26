#include <iostream>

using namespace std;

void ProcessArray(int Numbers[])
{
    cout << "Inside function: Size in bytes is "
         << sizeof(Numbers) << endl;
}

int main()
{
    int MyNumbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "Outside function: Size in bytes is ";
    cout << sizeof(MyNumbers) << endl;
    
    ProcessArray(MyNumbers);
    
    return 0;
}

// Outside function: Size in bytes is 40
// Inside function: Size in bytes is 8
