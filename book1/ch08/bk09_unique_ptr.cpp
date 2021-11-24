#include <iostream>
#include <memory>

using namespace std;

int main()
{
    unique_ptr<int> ptr1(new int());
    *ptr1 = 100;
    cout << "ptr1 value: " << *ptr1 << endl;

    int myValue = 42;
    unique_ptr<int> ptr2(&myValue);
    cout << "ptr2 value: " << *ptr2 << endl;

    unique_ptr<int> ptr3 = make_unique<int>(99);
    cout << "ptr3 value: " << *ptr3 << endl;
    cout << "ptr3 address: " << ptr3.get() << endl;

    unique_ptr<int> ptr4;
    ptr4 = move(ptr3);

    if (ptr3 == nullptr)
    {
        cout << "ptr3 is nullptr." << endl;
    }

    cout << "ptr4 value: " << *ptr4 << endl;
    cout << "ptr4 address: " << ptr4.get() << endl;

    return 0;
}

// ptr1 value: 100
// ptr2 value: 42
// ptr3 value: 99
// ptr3 address: 0x4cbe70
// ptr3 is nullptr.
// ptr4 value: 99
// ptr4 address: 0x4cbe70
