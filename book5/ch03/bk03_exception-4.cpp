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

void ProcessAnother()
{
    throw new double(1.234);
}

int main()
{
    // When creating a list of catch blocks,
    // always move from most specific to least specific.
    try
    {
        // ProcessData();
        // ProcessMore();
        ProcessAnother();
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
    catch (...)
    {
        cout << "Catch all!" << endl;
    }

    cout << "All finished." << endl;

    return 0;
}

// Catch all!
// All finished.
