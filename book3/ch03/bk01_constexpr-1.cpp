#include <iostream>

using namespace std;

consteval double sqr(double x)
{
    return x * x;
}

int main()
{
    constexpr double MySquare = sqr(4.2);

    cout << MySquare << endl;

    return 0;
}

// 17.64
