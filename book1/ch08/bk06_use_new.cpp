#include <iostream>

using namespace std;

int main()
{
    int* ptr = new int;
    *ptr = 10;
    
    cout << *ptr << endl;
    cout << ptr << endl;

    return 0;
}

// 10
// 0x3b1400
