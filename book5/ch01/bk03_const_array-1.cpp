#include <iostream>

using namespace std;

int main()
{
    // If you want to make the array elements constant,
    // you can precede its type with the word const.
    const int Permanent[5] = {1, 2, 3, 4, 5};
    
    cout << Permanent[1] << endl;

    // Error - Cannot assign to variable 'Permanent'
    // with const-qualified type 'const int [5]'
    Permanent[2] = 5;
}

//
