#include <iostream>
#include <stack>

using namespace std;

void StackDemo()
{
    // stack<int, vector<int>> MyStack;
    stack<int> MyStack;
    MyStack.push(5);
    MyStack.push(10);
    MyStack.push(15);

    cout << MyStack.top() << endl;
    MyStack.pop();
    cout << MyStack.top() << endl;
    MyStack.pop();

    MyStack.push(40);
    cout << MyStack.top() << endl;
    MyStack.pop();
}

int main()
{
    StackDemo();

    return 0;
}

// 15
// 10
// 40
