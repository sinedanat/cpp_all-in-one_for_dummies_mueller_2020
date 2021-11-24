#include <iostream>
#include <string>
#include <sstream>
#include <conio.h>

using namespace std;

int StringToNumber(string MyString)
{
    // Holds the string.
    istringstream converter(MyString);
    // Holds the integer result.
    int result;

    // Perform the conversion.
    converter >> result;

    return result;
}

string EnterOnlyNumbers()
{
    // Holds the numeric string.
    string numAsString = "";
    // Obtains a single character.
    char ch = getch();

    // Keep requesting characters until the user presses.
    // Enter.
    while (ch != '\r')    // \r is the enter key
    {
        // Add characters only if they are numbers.
        if (ch >= '0' && ch <= '9')
        {
            cout << ch;
            numAsString += ch;
        }

        // Get the next character from the user.
        ch = getch();
    }

    return numAsString;
}

string EnterPassword()
{
    // Holds the password string.
    string numAsString = "";
    // Obtains a single character from the user.
    char ch = getch();

    // Keep requesting characters until the user presses
    // Enter.
    while (ch != '\r')   // \r is the enter key
    {
        // Display an asterisk instead of the input character.
        cout << '*';
        // Add the character to the password string.
        numAsString += ch;
        // Get the next character from the user.
        ch = getch();
    }

    return numAsString;
}

int main()
{
    // Just a basic name-entering
    string name;
    cout << "What is your name? ";
    cin >> name;
    cout << "Hello " << name << endl;

    // Now you are asked to enter a number,
    // but the computer allows you to enter anything!
    int x;
    cout << endl;
    cout << "Enter a number, any number! ";
    cin >> x;
    cout << "You chose " << x << endl;

    // This time you can only enter a number.
    cout << endl;
    cout << "This time enter a number!" << endl;
    cout << "Enter a number, any number! ";
    string entered = EnterOnlyNumbers();
    int num = StringToNumber(entered);
    cout << endl << "You entered " << num << endl;

    // Now enter a password!
    cout << endl;
    cout << "Enter your password! ";
    string password = EnterPassword();
    cout << endl << "Shhhh, it's " << password << endl;

    return 0;
}

// What is your name? Ed
// Hello Ed
// 
// Enter a number, any number! 7
// You chose 7
// 
// This time enter a number!
// Enter a number, any number! 123
// You entered 123
// 
// Enter your password! ***
// Shhhh, it's xxx
