#include <iostream>
#include <vector>
#include <ranges>

using namespace std;

int main()
{
    vector<int> MyList{9, 2, 1, 6, 3, 8, 4};

    cout << "There are " << ranges::size(MyList)
         << " items in MyList" << endl;

    auto Filtered = MyList | views::filter([](int n)
    {
        return n % 3 == 0;
    });
    
    cout << "Items divisible by 3: " << endl;

    for (int i : Filtered)
        cout << i << endl;

    return 0;
}

// There are 7 items in MyList
// Items divisible by 3: 
// 9
// 6
// 3
