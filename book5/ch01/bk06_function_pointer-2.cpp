#include <iostream>

using namespace std;

int TheSecretNumber(int x)
{
    return x + 1;
}

int main()
{
    int MyPasscode = 20;
    
    auto address = &TheSecretNumber;

    cout << address(MyPasscode) << endl;

    return 0;
}

// 21
