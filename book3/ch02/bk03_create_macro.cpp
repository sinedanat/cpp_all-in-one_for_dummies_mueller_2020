#include <iostream>

using namespace std;

int main()
{
    auto f = [](auto Input)
    {
        cout << Input << endl;
    };

    f("Hello");
    f(221);
    f(true);
    f(99 / 3);
    f(char(65));
    f(int(15 / 4));

    return 0;
}

// Hello
// 221
// 1
// 33
// A
// 3
