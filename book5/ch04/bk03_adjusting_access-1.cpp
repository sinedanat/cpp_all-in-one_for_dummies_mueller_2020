#include <iostream>

using namespace std;

class Secret
{
protected:
    int X;
};

class Revealed : public Secret
{
public:
    // Error - ISO C++11 does not allow access declarations.
    // Use using declarations instead.
    Secret::X;
};

int main()
{
    return 0;
}

//
