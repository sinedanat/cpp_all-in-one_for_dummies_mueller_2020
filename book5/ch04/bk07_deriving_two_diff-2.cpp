#include <iostream>

using namespace std;

class Mom
{
public:
    int Bagel;

    void Brains()
    {
        cout << "I'm smart!" << endl;
    }
};

class Dad
{
public:
    int Bagel;

    void Beauty()
    {
        cout << "I'm beautiful!" << endl;
    }
};

class Derived : public Mom, public Dad
{
};

int main()
{
    Derived child;
    
    child.Brains();
    child.Beauty();

    child.Mom::Bagel = 42;
    child.Dad::Bagel = 17;

    cout << child.Mom::Bagel << endl;
    cout << child.Dad::Bagel << endl;

    return 0;
}

// I'm smart!
// I'm beautiful!
// 42
// 17
