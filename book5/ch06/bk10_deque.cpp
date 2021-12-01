#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main()
{
    deque<string> mydeque;

    mydeque.push_front("hello");
    mydeque.push_front("hi");
    mydeque.push_back("goodbye");
    mydeque.push_back("bye");

    for (auto elem : mydeque)
        cout << elem << endl;

    cout << endl;

    for (size_t i = 0; i < mydeque.size(); ++i)
    {
        cout << mydeque[i] << endl;
    }

    return 0;
}

// hi
// hello
// goodbye
// bye
// 
// hi
// hello
// goodbye
// bye
