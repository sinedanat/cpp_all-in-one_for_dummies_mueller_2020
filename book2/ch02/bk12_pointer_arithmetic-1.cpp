#include <iostream>

using namespace std;

int main()
{
    int Numbers[10];
    
    int SNumbers = sizeof(Numbers) / sizeof(*Numbers);

    for (int i = 0; i < SNumbers; i++)
    {
        Numbers[i] = i * 10;
    }

    int* cur = Numbers;
    cout << *cur << endl;
    cur++;
    cout << *cur << endl;
    cur += 3;
    cout << *cur << endl;
    cur--;
    cout << *cur << endl;

    return 0;
}

// 0
// 10
// 40
// 30
