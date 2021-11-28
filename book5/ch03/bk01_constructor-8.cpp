#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

class CallOne
{
public:
    int x;
    int y;

    CallOne();
    CallOne(int ax);
};

CallOne::CallOne()
{
    x = 10;
    y = 10;
}

CallOne::CallOne(int ax)
{
    y = 20;

    // You can't call one constructor from another constructor!
    // The second constructor is not calling
    //  the default constructor for the same object.
    // It's creating a separate, temporary instance.
    CallOne();
}

int main()
{
    CallOne Mine(10);

    cout << Mine.x << endl;
    cout << Mine.y << endl;

    return 0;
}

// 0
// 20
