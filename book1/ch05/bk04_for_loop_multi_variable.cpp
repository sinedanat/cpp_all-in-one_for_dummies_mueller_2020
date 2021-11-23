#include <iostream>

using namespace std;

int main()
{
    string A = "Hello";
    string B = "1122334455";

    for (int i = 0, j = 0; i < 5; i++, j += 2)
    {
        cout << A[i] << B[j] << endl;
    }

    return 0;
}

// H1
// e2
// l3
// l4
// o5
