#include <iostream>

using namespace std;

class Rock
{
public:
    int Weight;
};

class Diamond : virtual public Rock
{
public:
    void SetDiamondWeight(int newweight)
    {
        Weight = newweight;
    }

    int GetDiamondWeight()
    {
        return Weight;
    }
};

class Jade : virtual public Rock
{
public:
    void SetJadeWeight(int newweight)
    {
        Weight = newweight;
    }

    int GetJadeWeight()
    {
        return Weight;
    }
};

class MeltedMess : public Diamond, public Jade
{
};

int main()
{
    MeltedMess mymess;

    mymess.SetDiamondWeight(10);
    mymess.SetJadeWeight(20);
    mymess.Weight = 30;

    cout << mymess.GetDiamondWeight() << endl;
    cout << mymess.GetJadeWeight() << endl;
    cout << mymess.Weight << endl;

    Rock casted = static_cast<Rock>(mymess);
    cout << casted.Weight << endl;

    return 0;
}

// 30
// 30
// 30
// 30
