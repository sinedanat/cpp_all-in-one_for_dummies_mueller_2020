#include <iostream>
#include <string>
#include <map>

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

class Salary
{
public:
    int YearlyInc;
    int Taxes;

    Salary(int aannual, int adeductions)
        : YearlyInc(aannual), Taxes(adeductions) {}

    Salary() : YearlyInc(0), Taxes(0) {}
};

bool operator<(const Emp& first, const Emp& second)
{
    return first.Nickname < second.Nickname;
}

int main()
{
    map<Emp, Salary> employees;

    Emp emp1("sparky", "123-22-8572");
    Salary sal1(135000, 18);
    employees[emp1] = sal1;

    Emp emp2("buzz", "234-33-5784");
    Salary sal2(150000, 23);
    employees[emp2] = sal2;

    // Now test it out!
    Emp emptest("sparky", "");
    cout << employees[emptest].YearlyInc << endl;

    return 0;
}

// 135000
