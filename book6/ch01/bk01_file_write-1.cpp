#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream outfile("my_file-1.txt");
    outfile << "Hi" << endl;
    outfile.close();
    cout << "File Written!" << endl;

    return 0;
}

// File Written!
