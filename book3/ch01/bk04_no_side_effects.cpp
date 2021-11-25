#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int AddIt(const vector<int> Input, const int Start, const int End)
{
    int Accumulate = 0;

    // Copy the full vector to a vector of the correct size.
    vector<int> Process(End - Start);
    copy(&Input[Start], &Input[End], Process.begin());

    // Create a sum using a foreach loop.
    for (int Element : Process)
        Accumulate += Element;

    return Accumulate;
}

int main()
{
    const vector<int> ThisVector = {12, 2, 4, 18, 7, 2};

    cout << "Sum of All Elements: "
         << AddIt(ThisVector, 0, ThisVector.size()) << endl;
    cout << "Sum of Elements 1 through 4: "
         << AddIt(ThisVector, 1, 5) << endl;

    return 0;
}

// Sum of All Elements: 45
// Sum of Elements 1 through 4: 31
