#include <iostream>

using namespace std;

class Base
{
public:
    virtual void show() const = 0;
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
    // Error - Variable type 'Base' is an abstract class
    // Base base;
    Derived derived;

    // display(base);
    display(derived);

    return 0;
}

// Derived show() ...
