#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream outfile("outfile.txt");
    
    outfile << "Look at me! I'm in a file!" << endl;

    int x = 200;
    outfile << x << endl;

    outfile.close();

    cout << "File Written" << endl;

    return 0;
}

// File Written
