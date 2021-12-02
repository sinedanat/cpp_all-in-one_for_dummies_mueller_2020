#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    string word;
    ifstream infile("my_file-1.txt");
    infile >> word;
    cout << word << endl;
    infile.close();
    
    return 0;
}

// Hi
