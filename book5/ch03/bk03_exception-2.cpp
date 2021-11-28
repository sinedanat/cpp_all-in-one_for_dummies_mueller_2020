#include <iostream>
#include <string>

using namespace std;

void ProcessData()
{
    throw new string("Oops, I found some bad data!");
}

void ProcessMore()
{
    throw new int(10);
}

int main()
{
    // Because the function throws a pointer
    // to a string instance, the catch block
    // must accept a pointer to a string instance.
    // Everything must match.
    try
    {
        // ProcessData();
        ProcessMore();
        cout << "No problems!" << endl;
    }
    catch (string* excep)
    {
        cout << "Found an error. Here's the message." << endl;
        cout << *excep << endl;
    }
    catch (int* num)
    {
        cout << "Found a numerical error. Here it is." << endl;
        cout << *num << endl;
    }

    cout << "All finished." << endl;

    return 0;
}

// Found a numerical error. Here it is.
// 10
// All finished.
