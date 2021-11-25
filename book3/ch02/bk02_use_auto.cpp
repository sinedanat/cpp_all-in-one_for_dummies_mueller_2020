#include <iostream>
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

void ShowData(auto lambda)
{
    cout << "Input has a value of: " << lambda(3.6) << endl;
    cout << "Input has type of: "
         << DemangleIt(typeid(lambda(3.6)).name()) << endl;
}

int main()
{
    ShowData([](int x) -> int {return int(x * x);});
    ShowData([](double x) -> int {return int(x * x);});
    ShowData([](double x) -> double {return (x * x);});
    ShowData([](double x)
    {
        return float(x * x);
    });
    ShowData([](double x)
    {
        return x > 2 ? true : false;
    });
    ShowData([](double x) -> char {return char(x * 10);});

    return 0;
}

// Input has a value of: 9
// Input has type of: int
// Input has a value of: 12
// Input has type of: int
// Input has a value of: 12.96
// Input has type of: double
// Input has a value of: 12.96
// Input has type of: float
// Input has a value of: 1
// Input has type of: bool
// Input has a value of: $
// Input has type of: char
