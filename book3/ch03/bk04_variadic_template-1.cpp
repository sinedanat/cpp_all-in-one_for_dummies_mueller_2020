#include <iostream>

using namespace std;

template<typename... Types>
size_t nargs(Types... args)
{
    return sizeof...(args);
}

int main()
{
    cout << nargs(1, "3.5", true) << endl;
    cout << nargs(2, 4, "Hello", 1.1) << endl;
    cout << nargs() << endl;

    return 0;
}

// 3
// 4
// 0
