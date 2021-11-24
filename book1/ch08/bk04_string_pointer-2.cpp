#include <iostream>
#include <string>

using namespace std;

int main()
{
    string AMovie;
    string* ptrToString;

    AMovie = "L.A. Confidential";
    ptrToString = &AMovie;

    for (unsigned i = 0; i < AMovie.length(); i++)
    {
        cout << (*ptrToString)[i] << " ";
    }

    cout << endl;

    return 0;
}

// L . A .   C o n f i d e n t i a l 
