#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

int LineCount1(string filename)
{
    int lineCount = 0;
    char c = ' ';

    ifstream thisFile(filename);

    while (thisFile.get(c))
    {
        if (c == '\n')
            lineCount++;
    }

    thisFile.close();

    return lineCount;
}

int LineCount2(string filename)
{
    ifstream thisFile(filename);

    return count(istreambuf_iterator<char>(thisFile),
                 istreambuf_iterator<char>(), '\n');
}

int main()
{
    const string filename = "temp.txt";

    cout << LineCount1(filename) << endl;
    cout << LineCount2(filename) << endl;

    return 0;
}

// 4
// 4
