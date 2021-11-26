#include <iostream>
#include <string>

using namespace std;

class Gobstopper
{
public:
    int WhichGobstopper;

    int Chew(string name)
    {
        cout << WhichGobstopper << endl;
        cout << name << endl;
    
        return WhichGobstopper;
    }
};

int main()
{
    // Requires C++ 11 or above.
     auto func = &Gobstopper::Chew;

    Gobstopper inst;
    inst.WhichGobstopper = 10;

    Gobstopper another;
    another.WhichGobstopper = 20;

    (inst.*func)("Greg W.");
    (another.*func)("Jennifer W.");

    return 0;
}

// 10
// Greg W.
// 20
// Jennifer W.
