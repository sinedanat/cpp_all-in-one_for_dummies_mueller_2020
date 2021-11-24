#include <iostream>
#include <string>

using namespace std;

const int ParkingSpaces = 80;
const string StoreName = "Joe's Food Haven";
const double pi = 3.1415926;

int main()
{
    cout << "Important Message" << endl;
    cout << "Here at " << StoreName << endl;
    cout << "we believe you should know" << endl;
    cout << "that we have " << ParkingSpaces;
    cout << " full-sized" << endl;
    cout << "parking spaces for your parking" << endl;
    cout << "pleasure." << endl;
    cout << endl;
    cout << "We do realize that parking" << endl;
    cout << "is tight at " << StoreName << endl;
    cout << "and so we are going to double our" << endl;
    cout << "spaces from " << ParkingSpaces << " to ";
    cout << ParkingSpaces * 2;
    cout << ". Thank you again!" << endl << endl;

    double radius = 5.0;
    double area = radius * radius * pi;

    cout << "And remember, we sell " << radius;
    cout << " inch radius apple pies" << endl;
    cout << "for a full " << area << " square" << endl;
    cout << "inches of eating pleasure!" << endl;

    return 0;
}

// Important Message
// Here at Joe's Food Haven
// we believe you should know
// that we have 80 full-sized
// parking spaces for your parking
// pleasure.
// 
// We do realize that parking
// is tight at Joe's Food Haven
// and so we are going to double our
// spaces from 80 to 160. Thank you again!
// 
// And remember, we sell 5 inch radius apple pies
// for a full 78.5398 square
// inches of eating pleasure!
