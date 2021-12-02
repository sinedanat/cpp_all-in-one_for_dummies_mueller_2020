#include <iostream>

using namespace std;

int main()
{
    cout.setf(ios_base::showpoint);
    cout.precision(4);

    for (int i = 1; i <= 10; i++)
    {
        cout << 1.0 / i << endl;
    }

    cout << endl;

    cout << 2.0 << endl;
    cout << 12.0 << endl;
    cout << 12.5 << endl;
    cout << 123.5 << endl;
    cout << 1234.9 << endl;
    cout << 12348.8 << endl;
    cout << 123411.5 << endl;
    cout << 1234111.5 << endl;

    cout << endl;

    // Precision with zeros on the right.
    cout << 123000 << endl;
    cout << 123000.0 << endl;
    cout << 123.0e3 << endl;

    cout << endl;

    // Only available C++ 17 and above.
    // Use the -fext-numeric-literals switch.
    cout << 0x1E078p0 << endl;

    return 0;
}

// 1.000
// 0.5000
// 0.3333
// 0.2500
// 0.2000
// 0.1667
// 0.1429
// 0.1250
// 0.1111
// 0.1000
//
// 2.000
// 12.00
// 12.50
// 123.5
// 1235.
// 1.235e+04
// 1.234e+05
// 1.234e+06
//
// 123000
// 1.230e+05
// 1.230e+05
// 
// 1.230e+05
