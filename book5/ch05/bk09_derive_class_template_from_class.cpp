#include <iostream>

using namespace std;

class SuperMath
{
public:
    int IQ;
};

template<typename T>
class SuperNumber : public SuperMath
{
public:
    T value;

    T& AddTo(T another)
    {
        value += another;

        return value;
    }

    T& SubtractFrom(T another)
    {
        value -= another;

        return value;
    }
};

// Remember, when a function takes a pointer or reference to a class,
// you can instead pass an instance of a derived class.
void IncreaseIQ(SuperMath& inst)
{
    inst.IQ++;
}

int main()
{
    SuperNumber<int> First;
    First.value = 10;
    First.IQ = 206;

    cout << First.AddTo(20) << endl;

    SuperNumber<float> Second;
    Second.value = 20.5;
    Second.IQ = 201;

    cout << Second.SubtractFrom(1.3F) << endl;

    IncreaseIQ(First);
    IncreaseIQ(Second);

    cout << First.IQ << endl;
    cout << Second.IQ << endl;

    return 0;
}

// 30
// 19.2
// 207
// 202
