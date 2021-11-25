#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

void DisplayIt(auto Value)
{
    cout << Value << " is of the "
         << typeid(Value).name() << " type." << endl;
}

int main()
{
    auto Hello1 = "Hello There!";
    string Hello2 = "Hello Again!";
    auto Number1 = 1234;
    int Number2 = 5678;
    auto Float1 = 12.34;
    float Float2 = 56.78F;
    auto Boolean1 = true;
    bool Boolean2 = false;

    DisplayIt(Hello1);
    DisplayIt(Hello2);
    DisplayIt(Number1);
    DisplayIt(Number2);
    DisplayIt(Float1);
    DisplayIt(Float2);
    DisplayIt(Boolean1);
    DisplayIt(Boolean2);

    return 0;
}

// Hello There! is of the PKc type.
// Hello Again! is of the NSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE type.
// 1234 is of the i type.
// 5678 is of the i type.
// 12.34 is of the d type.
// 56.78 is of the f type.
// 1 is of the b type.
// 0 is of the b type.
