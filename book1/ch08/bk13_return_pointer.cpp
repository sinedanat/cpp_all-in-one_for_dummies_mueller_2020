#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>

using namespace std;

string* GetSecretCode()
{
    string* code = new string;
    code->append("CR");

    int randomnumber = rand();
    ostringstream converter;
    converter << randomnumber;
    code->append(converter.str());

    code->append("NQ");

    return code;
}

int main()
{
    string* newcode;

    for (int index = 0; index < 5; index++)
    {
        newcode = GetSecretCode();
        cout << *newcode << endl;
    }

    delete newcode;
    newcode = nullptr;

    return 0;
}

// CR41NQ
// CR18467NQ
// CR6334NQ
// CR26500NQ
// CR19169NQ
