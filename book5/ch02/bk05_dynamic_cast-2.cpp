#include <iostream>
#include <string>

using namespace std;

class King
{
protected:
    string CrownName;
public:
    virtual string& MyName()
    {
        return CrownName;
    }
    virtual ~King() {}
};

class Prince : public King
{
public:
    string School;
};

// King as a reference.
void KingInfo(King& inst)
{
    cout << "=========" << endl;
    cout << inst.MyName() << endl;

    // The reason for using an exception handler is that with a pointer,
    // you can simply test the result against 0.
    // But with references, you have no such thing
    // as a null reference or 0 reference.
    // The reference must work or you get a runtime error.
    try
    {
        Prince& asPrince = dynamic_cast<Prince&>(inst);
        cout << asPrince.School << endl;
    }
    catch (...) { }
}

int main()
{
    Prince George;
    George.MyName() = "George I";
    George.School = "School of the Kings";
    KingInfo(George);

    King Henry;
    Henry.MyName() = "Henry II";
    KingInfo(Henry);

    return 0;
}

// =========
// George I
// School of the Kings
// =========
// Henry II
