#include <iostream>

using namespace std;

template<typename T>
class Base
{
public:
    T a;
};

// Templates aren't derived from other templates.
// You can't derive from templates because templates aren't classes.
// Rather, templates are cookie cutters for classes,
// and the class resulting from a template can be derived
// from a class resulting from another template.
// The clue here is that the Derived template takes
// a template parameter called T.
// Then the class based on the template is derived
// from a class called Base<T>.
// But in this case, T is the parameter for the Derived template.
template<typename T>
class Derived : public Base<T>
{
public:
    T b;
};

void TestInt(Base<int>* inst)
{
    cout << inst->a << endl;
}

void TestDouble(Base<double>* inst)
{
    cout << inst->a << endl;
}

int main()
{
    // This line creates a class called Derived<int>.
    // Then, in this case, the parameter is int.
    // Thus the compiler replaces the Ts so that Base<T>
    // in this case becomes Base<int>.
    // So Derived<int> is derived from Base<int>.
    Base<int> base_int;
    Base<double> base_double;

    Derived<int> derived_int;
    Derived<double> derived_double;

    TestInt(&base_int);
    TestInt(&derived_int);

    TestDouble(&base_double);
    TestDouble(&derived_double);

    // Error - No matching function for call to 'TestDouble'.
    // TestDouble(&derived_int);

    return 0;
}

// 0
// 2488736
// 5.67059e-310
// 1.22948e-317
