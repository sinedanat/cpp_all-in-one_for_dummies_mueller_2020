#include <iostream>
#include <new>

using namespace std;

int main()
{
    int HowMany;
    int* DynArray;

    cout << "How many numbers would you like?" << endl;
    cin >> HowMany;
    
    DynArray = new(nothrow) int[HowMany];

    if (DynArray == nullptr)
        cout << "Error: Could not allocate memory!";
    else
    {
        for (int i = 0; i < HowMany; i++)
            DynArray[i] = i;

        cout << "Displaying entries:" << endl;

        for (int i = 0; i < HowMany; i++)
            cout << DynArray[i] << endl;

        delete[] DynArray;
        DynArray = nullptr;
    }

    return 0;
}

// How many numbers would you like?
// 7
// Displaying entries:
// 0
// 1
// 2
// 3
// 4
// 5
// 6

// How many numbers would you like?
// 100000000000
// Error: Could not allocate memory!
