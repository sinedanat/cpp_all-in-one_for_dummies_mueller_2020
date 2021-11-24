#include <iostream>

using namespace std;

int main()
{
    int Values[5];
    
    int VSize = sizeof(Values) / sizeof(*Values);

    cout << "Array count: " << VSize << endl;

    for (int i = 0; i < VSize; i++)
    {
        Values[i] = i * 2;
        cout << Values[i] << endl;
    }

    return 0;
}

// Array count: 5
// 0
// 2
// 4
// 6
// 8
