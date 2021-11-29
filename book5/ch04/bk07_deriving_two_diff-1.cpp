#include <iostream>

using namespace std;

class Mom
{
public:
    void Brains()
    {
        cout << "I'm smart!" << endl;
    }
};

class Dad
{
public:
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

    return 0;
}

// I'm smart!
// I'm beautiful!
