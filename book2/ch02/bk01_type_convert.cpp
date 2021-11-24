#include <iostream>
#include <string>
// For istringstream, ostringstream.
#include <sstream>

using namespace std;

int StringToNumber(string MyString)
{
    // Converts from string to number.
    istringstream converter(MyString);
    // Contains the operation results.
    int result;

    // Perform the conversion and return the results.
    converter >> result;

    return result;
}

string NumberToString(int Number)
{
    // Converts from number to string.
    ostringstream converter;

    // Perform the conversion and return the results.
    converter << Number;

    return converter.str();
}

int main()
{
    // Contains the theoretical number of kids.
    double NumberOfKids;
    // Contains an actual number of kids.
    int ActualKids;

    // You can theoretically have 2.5 kids, but in the
    // real world, you can't. Convert the theoretical number
    // of kids to a real number by truncating NumberOfKids
    // and display the results.
    NumberOfKids = 2.5;
    ActualKids = (int)NumberOfKids;
    cout << "Float to Integer" << "\tTruncated" << endl;
    cout << NumberOfKids << "\t\t\t" << ActualKids << endl;

    // Perform the same task as before,
    // but use a theoretical 2.1 kids this time.
    NumberOfKids = 2.1;
    ActualKids = (int)NumberOfKids;
    cout << NumberOfKids << "\t\t\t" << ActualKids << endl;

    // This time we'll use 2.9 kids.
    NumberOfKids = 2.9;
    ActualKids = (int)NumberOfKids;
    cout << NumberOfKids << "\t\t\t" << ActualKids << endl << endl;

    // This process rounds the number, instead of
    // truncating it. We do it using the same three
    // numbers as before.
    NumberOfKids = 2.5;
    ActualKids = (int)(NumberOfKids + .5);
    cout << "Float to Integer" << "\tRounded" << endl;
    cout << NumberOfKids << "\t\t\t" << ActualKids << endl;

    // Do it again using 2.1 kids.
    NumberOfKids = 2.1;
    ActualKids = (int)(NumberOfKids + .5);
    cout << NumberOfKids << "\t\t\t" << ActualKids << endl;

    // Do it yet again using 2.9 kids.
    NumberOfKids = 2.9;
    ActualKids = (int)(NumberOfKids + .5);
    cout << NumberOfKids << "\t\t\t" << ActualKids << endl << endl;

    // In this case, use the StringToNumber() function
    // to perform the conversion.
    cout << "String to number" << endl;
    int x = StringToNumber("12345") * 50;
    cout << x << endl << endl;

    // In this case, use the NumberToString() function
    // to perform the conversion.
    cout << "Number to string" << endl;
    string mystring = NumberToString(80525323);
    cout << mystring << endl;

    return 0;
}

// Float to Integer        Truncated
// 2.5                     2
// 2.1                     2
// 2.9                     2
// 
// Float to Integer        Rounded
// 2.5                     3
// 2.1                     2
// 2.9                     3
// 
// String to number
// 617250
// 
// Number to string
// 80525323
