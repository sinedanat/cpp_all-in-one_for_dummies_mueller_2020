#include <iostream>

using namespace std;

extern int MyNumbers[];

int main()
{
    // Error - Invalid application of 'sizeof' to an incomplete type 'int []'.
    cout << sizeof(MyNumbers) << endl;

    return 0;
}

//
