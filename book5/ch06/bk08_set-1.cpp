#include <iostream>
#include <string>
#include <set>

using namespace std;

class Emp
{
public:
    string Nickname;
    string SSN;

    Emp(string anickname, string asocial)
    : Nickname(anickname), SSN(asocial) {}

    Emp() : Nickname(""), SSN("") {}
};

bool operator<(const Emp& first, const Emp& second)
{
    return first.SSN < second.SSN;
}

ostream& operator<<(ostream& out, const Emp& emp)
{
    cout << "(" << emp.Nickname;
    cout << "," << emp.SSN;
    cout << ")";

    return out;
}

int main()
{
    set<Emp> employees;

    Emp emp1("sparky", "123-22-8572");
    employees.insert(emp1);
    Emp emp2("buzz", "234-33-5784");
    employees.insert(emp2);
    Emp emp3("albert", "123-22-8572");
    employees.insert(emp3);
    Emp emp4("sputz", "199-19-0000");
    employees.insert(emp4);

    // List the items.
    set<Emp>::iterator iter = employees.begin();

    while (iter != employees.end())
    {
        cout << *iter << endl;
        iter++;
    }

    // Find an item.
    cout << "Finding..." << endl;
    Emp findemp("", "123-22-8572");
    iter = employees.find(findemp);
    cout << *iter << endl;

    return 0;
}

// (sparky,123-22-8572)
// (sputz,199-19-0000)
// (buzz,234-33-5784)
// Finding...
// (sparky,123-22-8572)
