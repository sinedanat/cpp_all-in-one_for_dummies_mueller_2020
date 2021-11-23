#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    bool done = false;

    while (!done)
    {
        cout << i << endl;
        i++;

        if (i > 5)
            done = true;
    }

    cout << "All Finished!" << endl;
    
    return 0;
}

// 0
// 1
// 2
// 3
// 4
// 5
// All Finished!
