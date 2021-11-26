#include <iostream>

using namespace std;

void ShowMultiArray(int MultiArr[][3], int rows, int columns)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            cout << MultiArr[i][j] << " ";
        }

        cout << endl;
    }
}

int main()
{
    // int MultiArr[2][3] = {{1, 2, 3}, {10, 20, 30}};
    // ShowMultiArray(MultiArr, 2, 3);

    char NameArray[][6] =
    {
        {'T', 'o', 'm', '\0', '\0', '\0'},
        {'S', 'u', 'z', 'y', '\0', '\0'},
        {'H', 'a', 'r', 'r', 'y', '\0'}
    };

    char* NamePointers[] =
    {
        "Tom",
        "Suzy",
        "Harry"
    };

    // You can’t always treat a pointer as an array.
    // For example, you can't initialize a pointer as an array. 
    // Error - Excess elements in scalar initializer.
    char** PointerToPointer =
    {
        "Tom",
        "Suzy",
        "Harry"
    };

    // You can take an array and treat it
    // as a pointer most of the time.
    char** AnotherArray = NamePointers;

    return 0;
}

//
