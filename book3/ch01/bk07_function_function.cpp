#include <iostream>
#include <vector>

using namespace std;

int AddSome(int Value)
{
    return Value + 10;
}

int DelSome(int Value)
{
    return Value - 10;
}

int MulSome(int Value)
{
    return Value * 10;
}

int DivSome(int Value)
{
    return Value / 10;
}

typedef int (*FuncPtr)(int);

void ModIt(int Value, vector<FuncPtr> FuncArray)
{
    int NumFunc = FuncArray.size();

    cout << "Processing " << NumFunc << " functions." << endl;

    for (int i = 0; i < NumFunc; i++)
        cout << FuncArray[i](Value) << endl;
}

int main()
{
    vector<FuncPtr> FuncArray = {AddSome, DelSome, MulSome, DivSome};

    ModIt(10, FuncArray);

    return 0;
}

// Processing 4 functions.
// 20
// 0
// 100
// 1
