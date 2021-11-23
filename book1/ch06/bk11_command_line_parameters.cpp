#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[])
{
    for (int index = 1; index < argc; index++)
    {
        cout << argv[index] << endl;
    }

    return 0;
}

// Compile and run in console:
// > bk11_command_line_parameters.exe one two three
// one
// two
// three
