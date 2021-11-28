#include <iostream>
#include <string>

using namespace std;

int main()
{
    char str[] = {'A', 'p', 'p', 'l', 'e', '\0'};
    cout << str << endl;

    for (int x : str)
        cout << x << endl;

    int value = 123;
    char strValue[4];
    strValue[3] = '\0';

    for (int counter = 2; counter >= 0; counter--)
    {
        strValue[counter] = (char)(value % 10 + 48);
        value = value / 10;
    }

    cout << strValue << endl;

    string EasyValue = to_string(123);
    cout << EasyValue << endl;

    float f = 6.3;
    int i = f;
    cout << i << endl;

    f = i;
    cout << f << endl;

    return 0;
}

// Apple
// 65
// 112
// 112
// 108
// 101
// 0
// 123
// 123
// 6
// 6
