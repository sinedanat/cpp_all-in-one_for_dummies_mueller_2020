#include <iostream>
#include <string>

using namespace std;

class MyMath
{
public:
    string name;

    MyMath(string aname) : name(aname) {}

    template<typename T>
    void WriteAbsoluteValue(T x)
    {
        cout << "Hello " << name << endl;

        if (x >= 0)
            cout << x << endl;
        else
            cout << -x << endl;
    }
};

int main()
{
    MyMath inst = string("George");

    inst.WriteAbsoluteValue(-50.5);
    inst.WriteAbsoluteValue(-35);

    return 0;
}

// Hello George
// 50.5
// Hello George
// 35
