#include <iostream>
#include <string>

using namespace std;

class Cheese
{
public:
    string status;
    void eat();
    void rot();
};

int CheeseCount;

void OneMoreCheeseGone(Cheese* Block)
{
    CheeseCount--;
    Block->status = "Gone";
};

void Cheese::eat()
{
    cout << "Eaten up! Yummy" << endl;
    OneMoreCheeseGone(this);
}

void Cheese::rot()
{
    cout << "Rotted away! Yuck" << endl;
    OneMoreCheeseGone(this);
}

int main()
{
    Cheese* asiago = new Cheese();
    Cheese* limburger = new Cheese();

    CheeseCount = 2;
    asiago->eat();
    limburger->rot();

    cout << endl;
    cout << "Cheese count: " << CheeseCount << endl;
    cout << "asiago: " << asiago->status << endl;
    cout << "limburger: " << limburger->status << endl;

    delete asiago;
    delete limburger;

    return 0;
}

// Eaten up! Yummy
// Rotted away! Yuck
//
// Cheese count: 0
// asiago: Gone
// limburger: Gone
