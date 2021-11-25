#include <iostream>
#include <string>
#include <typeinfo>
#include <memory>
#include <cxxabi.h>

using namespace std;

string DemangleIt(const char* Mangled)
{
    int Status;
    unique_ptr<char[], void(*)(void*)> Result(
        abi::__cxa_demangle(Mangled, 0, 0, &Status), free);
    return Result.get() ? string(Result.get()) : "Error";
}

void DisplayIt(auto Value)
{
    cout << Value << " is of the " <<
         DemangleIt(typeid(Value).name()) << " type." << endl;
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

// Hello There! is of the char const* type.
// Hello Again! is of the std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > type.
// 1234 is of the int type.
// 5678 is of the int type.
// 12.34 is of the double type.
// 56.78 is of the float type.
// 1 is of the bool type.
// 0 is of the bool type.

