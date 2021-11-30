#include <iostream>

using namespace std;

template <typename T>
class Cluck
{
public:
    T Chicken;
};

// If there's a template that you use
// with particular parameters repeatedly,
// often just using typedef is the easiest way to go.
typedef Cluck<int> CluckNum;

int main()
{
    CluckNum foghorn;
    foghorn.Chicken = 4;

    cout << foghorn.Chicken << endl;

    return 0;
}

// 4
