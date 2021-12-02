#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    string filename = "my_file-3.txt";
    ifstream check(filename);

    if (!check)
    {
        cout << "File doesn't exist." << endl;

        return -1;
    }
    else
    {
        check.close();
    }

    fstream datafile(filename, ios_base::app);
    datafile << " There" << endl;
    datafile.close();

    cout << "File Written!" << endl;

    return 0;
}

// File doesn't exist. (If the file exists.)

// File Written! (If the file doesn't exist.)
