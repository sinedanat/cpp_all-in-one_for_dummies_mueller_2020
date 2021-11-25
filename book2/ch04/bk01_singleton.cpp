#include <iostream>

using namespace std;

class Planet
{
private:
    static Planet* inst;
    Planet() {}
    ~Planet() {}
public:
    static Planet* GetInstance();
};

Planet* Planet::inst = 0;

Planet* Planet::GetInstance()
{
    if (inst == 0)
    {
        inst = new Planet();
    }

    return inst;
}

int main()
{
    Planet* MyPlanet1 = Planet::GetInstance();
    cout << "MyPlanet1 address: " << MyPlanet1 << endl;

    Planet* MyPlanet2 = Planet::GetInstance();
    cout << "MyPlanet2 address: " << MyPlanet2 << endl;

    return 0;
}

// MyPlanet1 address: 0x511f50
// MyPlanet2 address: 0x511f50
