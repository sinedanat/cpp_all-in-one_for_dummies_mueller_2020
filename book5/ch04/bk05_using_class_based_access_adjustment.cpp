#include <iostream>

using namespace std;

class Secret
{
public:
    int Code, Number, SkeletonKey, System, Magic;
};

// Suppose you have a class that has several public members,
// and when you derive a new class, you want all the public members
// to become protected, except for one.
// The derived class inherits the base class as protected,
// as you can see in the header line for AddedSecurity.
// That means that all the inherited public members
// of Secret are protected in the derived class.
// But then the code promotes Magic back to public
// by adjusting its member access. Thus, Magic is the only public
// member of AddedSecurity. All the rest are protected.
class AddedSecurity : protected Secret
{
public:
    using Secret::Magic;
};

int main()
{
    AddedSecurity sec;
    sec.Magic = 77;

    cout << sec.Magic << endl;

    return 0;
}

// 77
