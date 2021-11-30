#include <iostream>
#include <string>

using namespace std;

template<typename T>
class SomethingForEveryone
{
public:
    T member;
};

template<int MaxPrice>
class PriceController
{
public:
    int Price;

    void TestPrice(string Name)
    {
        if (Price > MaxPrice)
        {
            cout << Name << " too expensive!" << endl;
        }
    }
};

int main()
{
    SomethingForEveryone<int> JustForMe;
    JustForMe.member = 2;
    cout << JustForMe.member << endl;

    const int FredMaxPrice = 30;
    PriceController<FredMaxPrice> FredsToaster;
    FredsToaster.Price = 15;
    FredsToaster.TestPrice("Toaster");
    PriceController<FredMaxPrice> FredsDrawingSet;
    FredsDrawingSet.Price = 45;
    FredsDrawingSet.TestPrice("Drawing set");

    const int JulieMaxPrice = 60;
    PriceController<JulieMaxPrice> JuliesCar;
    JuliesCar.Price = 80;
    JuliesCar.TestPrice("Car");

    return 0;
}

// 2
// Drawing set too expensive!
// Car too expensive!
