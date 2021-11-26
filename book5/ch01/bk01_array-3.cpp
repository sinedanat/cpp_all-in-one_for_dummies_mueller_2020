#include <iostream>

using namespace std;

int main()
{
    int LotsOfNumbers[50];
    int x;

    // Error - Array type 'int [50]' is not assignable.
    LotsOfNumbers = &x;

    return 0;
}

//
