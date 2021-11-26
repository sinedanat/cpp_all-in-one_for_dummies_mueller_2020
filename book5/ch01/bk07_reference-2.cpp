#include <iostream>

using namespace std;

class DigInto
{
private:
    int secret;
public:
    DigInto()
    {
        secret = 150;
    }
    int& GetSecretVariable()
    {
        return secret;
    }
    void Write()
    {
        cout << secret << endl;
    }
};

int main()
{
    DigInto inst;
    inst.Write();

    int& pry = inst.GetSecretVariable();
    pry = 30;
    inst.Write();

    auto& pry2 = inst.GetSecretVariable();
    pry2 = 40;
    inst.Write();

    return 0;
}

// 150
// 30
// 40
