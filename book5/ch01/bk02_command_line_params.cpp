#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int loop;

    for (loop = 0; loop < argc; loop++)
    {
        cout << argv[loop] << endl;
    }

    return 0;
}

// Compile and run in a console:
// > bk02_command_line_params Hello my darling!
// bk02_command_line_params
// Hello
// my
// darling!
