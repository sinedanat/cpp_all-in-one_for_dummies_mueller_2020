#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    string sentense = "";
    ifstream infile("my_file-2.txt");

    while (infile.good())
    {
        getline(infile, sentense);
        cout << sentense << endl;
    }

    infile.close();

    return 0;
}

// Hi
// Hi
