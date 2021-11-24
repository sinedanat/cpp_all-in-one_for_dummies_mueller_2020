#include <iostream>

using namespace std;

class Base
{
public:
    virtual void show() const
    {
        cout << "Base show() ..." << endl;
    }
};

class Derived : public Base
{
public:
    void show() const override
    {
        cout << "Derived show() ..." << endl;
    }
};

void display(const Base& obj)
{
    obj.show();
}

int main()
{
    Base base;
    Derived derived;

    display(base);
    display(derived);

    return 0;
}

// Base show() ...
// Derived show() ...
