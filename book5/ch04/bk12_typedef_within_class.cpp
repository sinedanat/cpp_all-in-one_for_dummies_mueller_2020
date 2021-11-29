#include <iostream>

using namespace std;

class Spongecake
{
public:
    // You can put a typedef inside your class.
    typedef int SpongeNumber;
    SpongeNumber weight;
    SpongeNumber diameter;
};

int main()
{
    Spongecake::SpongeNumber myweight = 30;

    cout << myweight << endl;

    Spongecake fluff;
    fluff.weight = myweight;

    cout << fluff.weight << endl;

    return 0;
}

// 30
// 30
