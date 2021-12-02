#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    vector<string> MyData;
    MyData.push_back("One");
    MyData.push_back("Two");

    ofstream outfile("my_data.txt");

    for (auto Element : MyData)
        outfile << Element << endl;

    outfile.close();
    
    cout << "File Written!" << endl;

    return 0;
}

// File Written!
