#include <iostream>

using namespace std;

constexpr int factorial(int n)
{
    return n <= 1 ? 1 : (n * factorial(n - 1));
}

template<int n>
struct FactOut
{
    int val;

    FactOut()
    {
        cout << n << endl;
        val = n;
    }
};

int main()
{
    // You can use a number if desired.
    const FactOut<15> Nothing1;

    // Computed at compile time.
    const FactOut<factorial(4)> Nothing2;

    // Computed at runtime.
    cout << factorial(5) << endl;

    // Output 'val'.
    cout << Nothing1.val << endl;
    cout << Nothing2.val << endl;

    return 0;
}

// 15
// 24
// 120
// 15
// 24
