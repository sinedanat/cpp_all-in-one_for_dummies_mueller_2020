#include <iostream>

using namespace std;

int main()
{
    int values[] = {1, 2, 3, 4, 5, 0};

    // Notice that the for loop doesn’t output the 0 in the values array.
    // Rather, it uses the 0 to determine the ending point of the array.
    // If you didn’t include this 0, the for loop would continue
    // until it found a 0, which means you could see
    // quite a bit of garbage onscreen.
    for (int i = 0; auto c = values[i]; i++)
    {
        cout << c << endl;
    }

    return 0;
}

// 1
// 2
// 3
// 4
// 5
