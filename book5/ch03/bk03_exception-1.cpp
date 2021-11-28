#include <iostream>
#include <string>

using namespace std;

void ProcessData()
{
    throw new string("Oops, I found some bad data!");
}

int main()
{
    try
    {
        ProcessData();
        cout << "No problems!" << endl;
    }
    catch (string* excep)
    {
        cout << "Found an error. Here's the message." << endl;
        cout << *excep << endl;
    }

    cout << "All finished." << endl;

    return 0;
}

// Found an error. Here's the message.
// Oops, I found some bad data!
// All finished.
