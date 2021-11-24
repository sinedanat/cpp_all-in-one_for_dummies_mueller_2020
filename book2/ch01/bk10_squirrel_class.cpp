#include <iostream>
#include <string>

using namespace std;

class Squirrel
{
private:
    string Name;
public:
    Squirrel(string StartName);
    ~Squirrel();
    void WhatIsMyName();
};

Squirrel::Squirrel(string StartName)
{
    cout << "Starting!" << endl;
    Name = StartName;
}

Squirrel::~Squirrel()
{
    cout << "Cleaning up my mess!" << endl;
}

void Squirrel::WhatIsMyName()
{
    cout << "My name is " << Name << endl;
}

int main()
{
    Squirrel* Sam = new Squirrel("Sam");
    Squirrel* Sally = new Squirrel("Sally");

    Sam->WhatIsMyName();
    Sally->WhatIsMyName();

    delete Sam;
    delete Sally;

    return 0;
}

// Starting!
// Starting!
// My name is Sam
// My name is Sally
// Cleaning up my mess!
// Cleaning up my mess!
