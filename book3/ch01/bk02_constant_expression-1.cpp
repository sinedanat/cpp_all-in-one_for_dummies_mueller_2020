#include <iostream>

using namespace std;

constexpr int factorial(int n)
{
    return n <= 1 ? 1 : (n * factorial(n - 1));
}

template<int n>
struct FactOut
{
    FactOut()
    {
        cout << n << endl;
    }
};

int main()
{
    // You can use a number if desired.
    FactOut<15> Nothing1;

    // Computed at compile time.
    FactOut<factorial(4)> Nothing2;

    // Computed at runtime.
    cout << factorial(5) << endl;

    return 0;
}

// 15
// 24
// 120
