#include <iostream>

using namespace std;

typedef char* PChar;

void MyFunction(PChar& x)
{
    x = new char('B');
}

int main()
{
    PChar ptr = new char('A');
    PChar copy = ptr;

    MyFunction(ptr);

    cout << "ptr points to " << *ptr << endl;
    cout << "copy points to " << *copy << endl;

    delete ptr;
    ptr = nullptr;
    delete copy;
    copy = nullptr;

    return 0;
}

// ptr points to B
// copy points to A
