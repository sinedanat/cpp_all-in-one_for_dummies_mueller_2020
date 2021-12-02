#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream myfile("numbers.txt");
    
    myfile.setf(ios_base::scientific);
    myfile << 154272.0 << endl;

    myfile << hex << showbase << 154272 << endl;

    myfile.unsetf(ios_base::hex);
    myfile << 154272 << endl;

    myfile.close();

    cout << "File Written" << endl;

    return 0;
}

// File Written
