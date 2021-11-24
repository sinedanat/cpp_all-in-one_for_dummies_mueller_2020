#include <iostream>
#include <string>

using namespace std;

class CrackedMusicCD
{
public:
    string FormerName;
    int FormerLength;
    int FormerProductionYear;
};

int main()
{
    CrackedMusicCD* Missing[10];

    int SMissing = sizeof(Missing) / sizeof(*Missing);

    for (int i = 0; i < SMissing; i++)
    {
        // Create object on the heap.
        Missing[i] = new CrackedMusicCD;

        Missing[i]->FormerProductionYear = 2000 + i;

        cout << Missing[i]->FormerProductionYear << endl;
    }

    // When you’re finished with the object pointers in the array,
    // you should delete the objects by calling delete
    // for each member of the array.
    for (int i = 0; i < SMissing; i++)
    {
        delete Missing[i];
        Missing[i] = nullptr;
    }

    return 0;
}

// 2000
// 2001
// 2002
// 2003
// 2004
// 2005
// 2006
// 2007
// 2008
// 2009
