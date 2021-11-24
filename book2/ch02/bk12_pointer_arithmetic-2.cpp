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

    for (int i = 0; i < SNumbers; i++)
    {
        cout << *(cur + i) << endl;
    }

    return 0;
}

// 0
// 10
// 20
// 30
// 40
// 50
// 60
// 70
// 80
// 90
