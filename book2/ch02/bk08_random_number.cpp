#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    // Seed the random-number generator.
    time_t now;
    time(&now);
    srand(now);

    // Print out a list of random numbers.
    for (int i = 0; i < 5; i++)
    {
        cout << rand() % 100 << endl;
    }

    return 0;
}

// 76
// 28
// 83
// 74
// 64
