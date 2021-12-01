#include <iostream>
#include <vector>

using namespace std;

class StoreMe
{
public:
    int Item;
};

int main()
{
    vector<StoreMe> instances;
    StoreMe value1 = {20};
    StoreMe value2 = {40};
    instances.push_back(value1);
    instances.push_back(value2);

    value1.Item = 12345;
    cout << instances[0].Item << endl;

    instances[0].Item = 34567;
    cout << instances[0].Item << endl;

    vector<StoreMe*> pointers;
    StoreMe value10 = {20};
    StoreMe value11 = {40};
    pointers.push_back(&value10);
    pointers.push_back(&value11);

    value10.Item = 12345;
    cout << (*pointers[0]).Item << endl;

    return 0;
}

// 20
// 34567
// 12345
