#include <iostream>
#include <string>

using namespace std;

class MyMath
{
public:
    string name;

    MyMath(string aname) : name(aname) {}

    // Although you can use function templates as class members,
    // you cannot make them virtual. The compiler won't allow it.
    // If you try to make the function template virtual,
    // you get an error message.
    // Error - 'virtual' cannot be specified on member function templates.
    template<typename T>
    virtual void WriteAbsoluteValue(T x)
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

//
