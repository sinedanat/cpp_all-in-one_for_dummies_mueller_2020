#include <iostream>
#include <fstream>
#include <ios>

using namespace std;

int main()
{
    // Open an existing file and append to it.
    ofstream outfile("my_file-2.txt", ios_base::app);
    outfile << "Hi" << endl;
    outfile.close();
    cout << "File Written!" << endl;

    return 0;
}

// File Written!
