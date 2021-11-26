#include <iostream>

using namespace std;

int main()
{
    // Allocating an array on the heap.
    int* MyArray = new int[4]{1, 11, 111, 1111};

    for (int i = 0; i < 4; ++i)
    {
        cout << MyArray[i] << " ";        
    }

    cout << endl;

    // Deleting an array from the heap.
    delete[] MyArray;
    MyArray = nullptr;

    return 0;
}

// 1 11 111 1111 
