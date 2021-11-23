#include <iostream>

using namespace std;

int main()
{
    int i;

    for (i = 0; i < 10; i++)
    {
        cout << i << " ";

        if (i == 5)
        {
            cout << endl;
            continue;
        }

        cout << i * 2 << endl;
    }

    cout << "All Finished!" << endl;

    return 0;
}

// 0 0
// 1 2
// 2 4
// 3 6
// 4 8
// 5 
// 6 12
// 7 14
// 8 16
// 9 18
// All Finished!
