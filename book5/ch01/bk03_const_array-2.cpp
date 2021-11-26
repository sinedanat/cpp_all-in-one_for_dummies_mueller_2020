#include <iostream>

using namespace std;

int main()
{
    // Name of array is always constant.
    int OneArray[5] = {1, 2, 3, 4, 5};
    int OtherArray[5] = {10, 11, 12, 13, 14};

    // Error - Array type 'int [5]' is not assignable.
    OtherArray = OneArray;

    return 0;
}

//
