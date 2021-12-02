#include <iostream>
#include <direct.h>

using namespace std;

int main()
{
    char CurrentPath[PATH_MAX];
    getcwd(CurrentPath, PATH_MAX);
    cout << CurrentPath << endl;
    
    return 0;
}

// ...
