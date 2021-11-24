#include <iostream>
#include <memory>

using namespace std;

int main()
{
    int myValue = 42;
    shared_ptr<int> ptr1(new int(myValue));
    cout << "ptr1 value: " << *ptr1 << endl;
    cout << "ptr1 use count: " << ptr1.use_count() << endl;

    shared_ptr<int> ptr2 = ptr1;
    cout << "ptr2 value: " << *ptr2 << endl;
    cout << "ptr1 address: " << ptr1 << endl;
    cout << "ptr2 address: " << ptr2 << endl;
    cout << "ptr1 use count: " << ptr1.use_count() << endl;

    myValue = 55;
    cout << "ptr1 myValue: " << myValue << endl;
    cout << "ptr1 value: " << *ptr1 << endl;
    cout << "ptr2 value: " << *ptr2 << endl;

    ptr2.reset();
    cout << "ptr1 use count: " << ptr1.use_count() << endl;

    ptr1.reset();
    cout << "ptr1 use count: " << ptr1.use_count() << endl;

    return 0;
}

// ptr1 value: 42
// ptr1 use count: 1
// ptr2 value: 42
// ptr1 address: 0x471f80
// ptr2 address: 0x471f80
// ptr1 use count: 2
// ptr1 myValue: 55
// ptr1 value: 42
// ptr2 value: 42
// ptr1 use count: 1
// ptr1 use count: 0
