#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    fstream iofile("my_file-4.txt", ios::in | ios::out | ios::trunc);
    iofile << "Hi" << endl;
    iofile.flush();

    string Data;
    iofile.seekg(0, ios::beg);
    iofile >> Data;
    iofile.close();

    cout << "File Written!" << endl;
    cout << Data << endl;

    return 0;
}

// File Written!
// Hi
