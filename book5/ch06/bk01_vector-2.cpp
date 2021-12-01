#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Employee
{
public:
    string Name;
    string FireDate;
    int GoofoffDays;

    Employee(string aname, string afiredate, int agoofdays)
        : Name(aname), FireDate(afiredate), GoofoffDays(agoofdays) {}
};

int main()
{
    // A vector that holds strings.
    vector<string> MyAliases;
    MyAliases.push_back(string("Bud The Sailor"));
    MyAliases.push_back(string("Rick Fixit"));
    MyAliases.push_back(string("Bobalou Billow"));

    for (auto entry : MyAliases)
        cout << entry << endl;

    cout << endl;

    // A vector that holds integers.
    vector<int> LuckyNumbers;
    LuckyNumbers.push_back(13);
    LuckyNumbers.push_back(26);
    LuckyNumbers.push_back(52);

    for (auto entry : LuckyNumbers)
        cout << entry << endl;

    cout << endl;

    // A vector of a specific size and reverse-fills
    // the vector from the end to the beginning.
    vector<int> Default(5);
    int i = 0;
    vector<int>::reverse_iterator rentry = Default.rbegin();

    for (; rentry != Default.rend(); rentry++)
        *rentry = ++i;

    for (auto entry : Default)
        cout << entry << endl;

    cout << endl;

    // A vector that holds Employee instances.
    vector<Employee> GreatWorkers;
    GreatWorkers.push_back(Employee("George", "123100", 50));
    GreatWorkers.push_back(Employee("Tom", "052002", 40));

    for (auto entry : GreatWorkers)
        cout << entry.Name << endl;

    return 0;
}

// Bud The Sailor
// Rick Fixit
// Bobalou Billow
//
// 13
// 26
// 52
//
// 5
// 4
// 3
// 2
// 1
//
// George
// Tom
