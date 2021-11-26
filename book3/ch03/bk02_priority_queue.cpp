#include <iostream>
#include <queue>

using namespace std;

int main()
{
    priority_queue <int,
                   vector<int>,
                   decltype([](int a, int b)->bool{return a > b;})> PQ;

    PQ.push(10);
    PQ.push(5);
    PQ.push(8);
    PQ.push(1);
    PQ.push(11);

    while (!PQ.empty())
    {
        cout << PQ.top() << endl;
        PQ.pop();
    }

    return 0;
}

// 1
// 5
// 8
// 10
// 11
