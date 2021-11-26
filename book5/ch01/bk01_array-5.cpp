#include <iostream>

using namespace std;

int main()
{
    // Allocating an array on the heap.
    int* MyArray = new int[4] {1, 11, 111, 1111};

    // Allocating an int on the heap.
    int* MyInt = new int{555};

    for (int i = 0; i < 4; ++i)
    {
        cout << MyArray[i] << " ";
    }

    cout << endl;

    cout << *MyInt << endl;

    // Deleting an array from the heap.
    delete[] MyArray;
    MyArray = nullptr;

    // Deleting an int from the heap.
    delete MyInt;
    MyInt = nullptr;


    return 0;
}

// 1 11 111 1111 
// 555
