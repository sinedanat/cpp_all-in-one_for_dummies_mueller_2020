#include <iostream>

using namespace std;

int main()
{
    for (int x = 1; x <= 3; x++)
    {
        for (int y = 1; y < 3; y++)
        {
            if (y == 2)
                break;

            for (int z = 1; z < 3; z++)
            {
                cout << x << " " << y;
                cout << " " << z << endl;
            }
        }
    }

    return 0;
}

// 1 1 1
// 1 1 2
// 2 1 1
// 2 1 2
// 3 1 1
// 3 1 2
