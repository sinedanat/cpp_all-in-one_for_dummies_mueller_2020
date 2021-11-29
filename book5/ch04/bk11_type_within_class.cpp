#include <iostream>

using namespace std;

class Cheesecake
{
public:
    // You can put an enum inside your class.
    enum Flavor
    {
        ChocolateSuicide,
        SquishyStrawberry,
        BrokenBanana,
        PrettyPlainVanilla,
        CoolLuah,
        BizarrePurple
    };
    Flavor SelectedFlavor;

    int AmountLeft;

    void Eat()
    {
        AmountLeft = 0;
    }
};

int main()
{
    Cheesecake yum;

    yum.SelectedFlavor = Cheesecake::SquishyStrawberry;
    yum.AmountLeft = 100;
    yum.Eat();

    cout << yum.AmountLeft << endl;

    // You can use the Flavor type anywhere in your application,
    // but to use it outside the Cheesecake class,
    // you must fully qualify its name by lining up the class name,
    // two colons, and then the type name
    Cheesecake::Flavor myflavor = Cheesecake::CoolLuah;

    cout << myflavor << endl;

    return 0;
}

// 0
// 4
