#include <iostream>

using namespace std;

template<typename T>
class Electricity
{
public:
    static T charge;
};

template<typename T>
T Electricity<T>::charge;

int main()
{
    // When you include a static member in a template,
    // each class that you create based on the template
    // gets its own static member.
    // Further, you need to tell the compiler
    // how to store the static member just as you do
    // with static members of classes
    // that aren't created from templates.
    Electricity<int>::charge = 10;
    Electricity<float>::charge = 98.6F;

    Electricity<int> inst;
    inst.charge = 22;

    // There's only a single static member per class.
    // You can see that the output for the two
    // Electricity<int> lines are the same
    // and the Electricity<float> output is different.
    cout << Electricity<int>::charge << endl;
    cout << Electricity<float>::charge << endl;
    cout << inst.charge << endl;

    return 0;
}

// 22
// 98.6
// 22
