#include <algorithm>
#include <iostream>

using namespace std;

class Secret
{
protected:
    int X;
public:
    void SetX()
    {
        X = 10;
    }
    int GetX()
    {
        return X;
    }
};

// If you want to make a protected member public in a derived class,
// don't just redeclare the member. If you do, you end up with
// two properties of the same name within the class.
// And needless to say, that can be confusing!
class Revealed : public Secret
{
public:
    int X;
};

int main()
{
    Revealed me;

    me.SetX();
    me.X = 30;

    cout << "Secret::X is " << me.GetX() << endl;
    cout << "Revealed::X is " << me.X << endl;

    return 0;
}

// Secret::X is 10
// Revealed::X is 30
