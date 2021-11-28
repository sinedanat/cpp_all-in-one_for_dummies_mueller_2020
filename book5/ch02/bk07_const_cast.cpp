#include <iostream>

using namespace std;

void PrintIt(int* out)
{
    cout << "The value is: " << *out << endl;
}

int main()
{
    volatile int X = 20;
    const int Y = 30;

    PrintIt(const_cast<int*>(&X));
    PrintIt(const_cast<int*>(&Y));

    return 0;
}

// The value is: 20
// The value is: 30
