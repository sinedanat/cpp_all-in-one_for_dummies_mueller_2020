#include <iostream>
#include "bk02_safe_stuff.cpp"

using namespace std;

int main()
{
    cout << "Surprise, surprise!" << endl;
    cout << "The combination for Safe 12 is: " << endl;
    cout << SafeCracker(12) << endl;
    cout << "Let's check on Safe 11 too: " << endl;
    cout << SafeCracker(11) << endl;

    return 0;
}

// Surprise, surprise!
// The combination for Safe 12 is: 
// 13-26-16
// Let's check on Safe 11 too: 
// Safe Combination Unknown
