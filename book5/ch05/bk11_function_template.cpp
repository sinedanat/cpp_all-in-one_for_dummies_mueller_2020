#include <iostream>

using namespace std;

template<typename T>
T AbsoluteValue(T x)
{
    if (x >= 0)
        return x;
    else
        return -x;
}

int main()
{
    cout << AbsoluteValue<int>(-10) << endl;
    cout << AbsoluteValue<double>(-20.4) << endl;

    cout << AbsoluteValue(-10) << endl;
    cout << AbsoluteValue(-20.4) << endl;

    return 0;
}

// 10
// 20.4
// 10
// 20.4
