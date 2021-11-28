#include <iostream>
#include <string>

using namespace std;

void ProcessData()
{
    throw string("Oops, I found some bad data!");
}

void ProcessMore()
{
    throw 10;
}

int main()
{
    // The preferred method of throwing exceptions
    // in newer versions of C++ is to use
    // references in the catch block.
    try
    {
        // ProcessData();
        ProcessMore();
        cout << "No problems!" << endl;
    }
    catch (string& excep)
    {
        cout << "Found an error. Here's the message." << endl;
        cout << excep << endl;
    }
    catch (int& num)
    {
        cout << "Found a numerical error. Here it is." << endl;
        cout << num << endl;
    }

    cout << "All finished." << endl;

    return 0;
}

// Found a numerical error. Here it is.
// 10
// All finished.
