#include <iostream>
#include <array>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    array<char, 5> Letters = {'a', 'b', 'c', 'd', 'e'};

    for (auto entry : Letters)
        cout << entry << " ";

    cout << endl;

    reverse_copy(Letters.begin(),
                 Letters.end(),
                 ostream_iterator<char>(cout, " "));

    cout << endl;

    return 0;
}

// a b c d e 
// e d c b a
