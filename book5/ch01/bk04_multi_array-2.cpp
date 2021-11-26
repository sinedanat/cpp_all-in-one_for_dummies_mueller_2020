#include <iostream>

using namespace std;

void ShowMultiArray(int MultiArr[][3], int rows, int columns)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            cout << MultiArr[i][j] << " ";
        }

        cout << endl;
    }
}

int main()
{
    int MultiArr[2][3] = {{1, 2, 3}, {10, 20, 30}};

    ShowMultiArray(MultiArr, 2, 3);

    return 0;
}

// 1 2 3 
// 10 20 30 
