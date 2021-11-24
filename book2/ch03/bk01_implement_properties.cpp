#include <iostream>
#include <string>

using namespace std;

class MyDog
{
protected:
    string _Name;
    int _Weight = 300;
    bool _IsHealthy = false;

public:
    // Properties.
    string getName()
    {
        return _Name;
    }

    int getWeight()
    {
        return _Weight;
    }
    void setWeight(int Weight)
    {
        if (Weight > 0)
            _Weight = Weight;
    }

    void setIsHealthy(bool IsHealthy)
    {
        if (_Weight > 200)
            _IsHealthy = false;
        else
            _IsHealthy = IsHealthy;
    }

    // Methods.
    MyDog(string Name);
    void DoDogRun();
};

MyDog::MyDog(string Name)
{
    if (Name.length() == 0)
        throw "Error: Couldn't create MyDog!";

    MyDog::_Name = Name;
}

void MyDog::DoDogRun()
{
    if (MyDog::_IsHealthy)
        cout << MyDog::_Name << " is running!" << endl;
    else if (MyDog::_Weight > 200)
        cout << MyDog::_Name << " is too fat to run!" << endl;
    else
        cout << MyDog::_Name
             << " is unhealthy; see vet first!" << endl;
}

int main()
{
    MyDog* ThisDog;

    try
    {
        // Uncomment to generate an error.
        //ThisDog = new MyDog("");

        ThisDog = new MyDog("Fred");
    }
    catch (const char* msg)
    {
        cerr << msg << endl;

        return -1;
    }

    cout << ThisDog->getName() << " needs exercise." << endl;
    ThisDog->DoDogRun();

    ThisDog->setWeight(100);
    ThisDog->DoDogRun();

    ThisDog->setIsHealthy(true);
    ThisDog->DoDogRun();

    delete ThisDog;
    ThisDog = nullptr;

    return 0;
}

// Fred needs exercise.
// Fred is too fat to run!
// Fred is unhealthy; see vet first!
// Fred is running!
