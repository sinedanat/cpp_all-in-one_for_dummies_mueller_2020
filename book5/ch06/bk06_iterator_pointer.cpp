#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> test{1, 2, 3};

    vector<int>::iterator i1 = test.begin();
    i1++;
    cout << &i1 << endl;

    test.push_back(4);

    vector<int>::iterator i2 = test.begin();
    i2++;
    cout << &i2 << endl;

    return 0;
}

// 0x39fb38
// 0x39fb30
