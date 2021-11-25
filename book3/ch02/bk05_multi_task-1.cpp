#include <iostream>
#include <typeinfo>

using namespace std;

struct AddVal_t {};
typedef AddVal_t AddVal;

struct SubVal_t {};
typedef SubVal_t SubVal;

int main()
{
    int Total = 0;

    auto ChangeNum = [Total](auto Type, int Value) mutable
    {
        if (is_same<decltype(Type), AddVal>::value)
        {
            Total += Value;

            return Total;
        }
        else if (is_same<decltype(Type), SubVal>::value)
        {
            Total -= Value;
            
            return Total;
        }
        else
        {
            throw (-1);
        }
    };

    AddVal DoAdd;
    SubVal DoSub;

    cout << ChangeNum(DoAdd, 5) << endl;
    cout << ChangeNum(DoAdd, 6) << endl;
    cout << ChangeNum(DoSub, 4) << endl;

    try
    {
        cout << ChangeNum(5, 5) << endl;
    }
    catch (int e)
    {
        cout << "Error in Input!" << endl;
    }

    cout << Total << endl;

    return 0;
}

// 5
// 11
// 7
// Error in Input!
// 0
