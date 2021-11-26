#include <iostream>

using namespace std;

typedef char* PChar;

void AnotherFunction(char** x)
{
    *x = new char('C');
}

int main()
{
    PChar ptr = new char('A');
    PChar copy = ptr;

    AnotherFunction(&ptr);

    cout << "ptr points to " << *ptr << endl;
    cout << "copy points to " << *copy << endl;

    delete ptr;
    ptr = nullptr;
    delete copy;
    copy = nullptr;

    return 0;
}

// ptr points to C
// copy points to A
