#include <iostream>

using namespace std;

class Secret
{
protected:
    int X;
};

// You may have a class that has protected members.
// And in a derived class, you may want to make these members public.
// Here's the ANSI way, which requires the word using.
class Revealed : public Secret
{
public:
    using Secret::X;
};

int main()
{
    Secret sec;
    // Error - 'X' is a protected member of 'Secret'.
    // sec.X = 12;

    // Now, when you use the Revealed class,
    // the inherited member X is public,
    // but X is still protected in the base class, Secret.
    Revealed rev;
    rev.X = 1234;

    cout << rev.X << endl;

    return 0;
}

// 1234
