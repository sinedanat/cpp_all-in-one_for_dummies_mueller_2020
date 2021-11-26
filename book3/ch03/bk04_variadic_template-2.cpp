#include <iostream>

using namespace std;

template<typename T>
void ProcessArgs(T arg)
{
    cout << arg << endl;
}

template<typename T, typename... Args>
void ProcessArgs(T ThisArg, Args... args)
{
    cout << ThisArg << endl;
    ProcessArgs(args...);
}

int main()
{
    ProcessArgs(1, "Hello", true, 3.5);
    
    return 0;
}

// 1
// Hello
// 1
// 3.5
