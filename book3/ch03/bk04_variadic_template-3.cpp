#include <iostream>
#include <typeinfo>

using namespace std;

auto constraint = [](int x)
{
    return x > 7;
};

template<typename T>
bool ProcessArgs(T arg)
{
    cout << "Value is: " << arg << endl;

    return constraint(arg);
}

template<typename T, typename... Args>
bool ProcessArgs(T arg, Args... args)
{
    cout << "Value is: " << arg << endl;

    return constraint(arg) && ProcessArgs(args...);
}

int main()
{
    cout << "List contains only numbers above 7: " << endl
         << (ProcessArgs(10, 11, 14, 8) ? "True" : "False") << endl;

    cout << endl;

    cout << "List contains only numbers above 7: " << endl
         << (ProcessArgs(10, 3, 6) ? "True" : "False") << endl;

    return 0;
}

// List contains only numbers above 7: 
// Value is: 10
// Value is: 11
// Value is: 14
// Value is: 8
// True
// 
// List contains only numbers above 7: 
// Value is: 10
// Value is: 3
// False
