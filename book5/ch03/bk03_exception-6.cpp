#include <iostream>

using namespace std;

bool CheckInt(int value)
{
    if (value > 5)
    {
        return true;
    }
    else
    {
        throw invalid_argument("Input too small!");
    }

    return false;
}

int main()
{
    try
    {
        cout << (CheckInt(6) ? "OK" : "Not Right") << endl;
        cout << (CheckInt(5) ? "OK" : "Not Right") << endl;
    }
    catch (const invalid_argument& ex)
    {
        cerr << "Invalid Argument: " << ex.what() << endl;
    }

    return 0;
}

// OK
// Invalid Argument: Input too small!
