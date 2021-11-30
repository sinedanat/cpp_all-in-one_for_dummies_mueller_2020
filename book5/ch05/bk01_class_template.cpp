#include <iostream>

using namespace std;

template<typename T>
class CoolHolder
{
public:
    T first;
    T second;
    T third;

    T sum()
    {
        return first + second + third;
    }
};

int main()
{
    CoolHolder<int> IntHolder;
    IntHolder.first = 10;
    IntHolder.second = 20;
    IntHolder.third = 30;

    CoolHolder<int> AnotherIntHolder;
    AnotherIntHolder.first = 100;
    AnotherIntHolder.second = 200;
    AnotherIntHolder.third = 300;

    CoolHolder<float> FloatHolder;
    FloatHolder.first = 3.1415F;
    FloatHolder.second = 4.1415F;
    FloatHolder.third = 5.1415F;

    cout << IntHolder.first << endl;
    cout << AnotherIntHolder.first << endl;
    cout << FloatHolder.first << endl;

    cout << endl;

    CoolHolder<int>* hold;

    for (int loop = 0; loop < 10; loop++)
    {
        hold = new CoolHolder<int>;

        hold->first = loop * 100;
        hold->second = loop * 110;
        hold->third = loop * 120;

        cout << hold->sum() << endl;

        delete hold;
    }

    return 0;
}

// 10
// 100
// 3.1415
// 
// 0
// 330
// 660
// 990
// 1320
// 1650
// 1980
// 2310
// 2640
// 2970
