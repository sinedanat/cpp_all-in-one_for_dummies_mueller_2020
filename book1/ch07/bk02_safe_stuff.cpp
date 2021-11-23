#include <iostream>
#include "bk02_safe_stuff.hpp"

using namespace std;

string SafeCracker(int SafeID)
{
    if (SafeID == 12)
        return "13-26-16";
    else
        return "Safe Combination Unknown";
}

//
