#include <iostream>

using namespace std;

int TheSecretNumber(int x)
{
    return x + 1;
}

int main()
{
    typedef int (*FunctionPtr)(int);

    int MyPasscode = 20;
    
    FunctionPtr address = &TheSecretNumber;

    cout << address(MyPasscode) << endl;

    return 0;
}

// 21
