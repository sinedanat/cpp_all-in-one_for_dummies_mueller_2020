#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    // Display a list of options.
    cout << "Choose your favorite:" << endl;
    cout << "1. Apples " << endl;
    cout << "2. Bananas " << endl;
    cout << "3. Lobster " << endl;

    // Obtain the user's selection.
    char ch = getch();

    // Continue getting user selections
    // until the user enters a valid number.
    while (ch < '1' || ch > '3')
    {
        ch = getch();
    }

    // Use a switch to display the user's selection.
    cout << "You chose " << ch << endl;

    switch (ch)
    {
        case '1':
            cout << "Apples are good for you!" << endl;
            break;

        case '2':
            cout << "Bananas have plenty of potassium!" << endl;
            break;

        case '3':
            cout << "Expensive, but you have good taste!" << endl;
            break;
    }

    return 0;
}

// Choose your favorite:
// 1. Apples
// 2. Bananas
// 3. Lobster
// You chose 1
// Apples are good for you!

// Choose your favorite:
// 1. Apples
// 2. Bananas
// 3. Lobster
// You chose 2
// Bananas have plenty of potassium!

// Choose your favorite:
// 1. Apples
// 2. Bananas
// 3. Lobster
// You chose 3
// Expensive, but you have good taste!
