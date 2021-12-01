#include <iostream>
#include <queue>

using namespace std;

void QueueDemo()
{
    // queue<int, list<int>> MyQueue;
    queue<int> MyQueue;
    MyQueue.push(5);
    MyQueue.push(10);
    MyQueue.push(15);

    cout << MyQueue.front() << endl;
    MyQueue.pop();
    cout << MyQueue.front() << endl;
    MyQueue.pop();

    MyQueue.push(40);
    cout << MyQueue.front() << endl;
    MyQueue.pop();
}

int main()
{
    QueueDemo();

    return 0;
}

// 5
// 10
// 15
