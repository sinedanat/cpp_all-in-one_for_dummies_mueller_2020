#include <iostream>
#include <string>

using namespace std;

int main()
{
    string words = "Something interesting and bizarre";

    cout << words << endl;
    words.insert(10, "seriously ");
    cout << words << endl;
    words.erase(19, 16);
    cout << words << endl;
    words.replace(4, 5, "body");
    cout << words << endl;

    return 0;
}

// Something interesting and bizarre
// Something seriously interesting and bizarre
// Something seriously bizarre
// Somebody seriously bizarre
