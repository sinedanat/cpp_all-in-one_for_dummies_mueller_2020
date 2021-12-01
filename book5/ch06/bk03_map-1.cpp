#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    map<string, string> marriages;
    marriages["Tom"] = "Suzy";
    marriages["Harry"] = "Harriet";

    cout << marriages["Tom"] << endl;
    cout << marriages["Harry"] << endl;

    return 0;
}

// Suzy
// Harriet
