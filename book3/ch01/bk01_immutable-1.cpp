#include <iostream>

using namespace std;

struct Immutable
{
    int val{7};
};

int main()
{
    const int* test1 = new int(5);
    // Error - Read-only variable is not assignable.
    *test1 = 10;

    const int test2{6};
    // Error - Cannot assign to variable 'test2'
    // with const-qualified type 'const int'
    test2 = 11;

    const Immutable test3;
    // Error - Cannot assign to variable 'test3'
    // with const-qualified type 'const Immutable'
    test3.val = 12;

    cout << *test1 << test2 << test3.val << endl;
}

//
