#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
    ofstream sals("salaries.txt");

    sals << setprecision(2) << fixed << left;
    sals << setw(20) << "Name" << setw(10) << "Salary";
    sals << endl;

    // 19 hyphens, one space.
    sals << "------------------- ";

    // 10 hyphens.
    sals << "----------" << endl;

    sals << setw(20) << "Hank Williams";
    sals << setw(10) << 28422.82 << endl;
    sals << setw(20) << "Buddy Holly";
    sals << setw(10) << 39292.22 << endl;
    sals << setw(20) << "Otis Redding";
    sals << setw(10) << 43838.55 << endl;
    
    sals.close();

    cout << "File Written" << endl;

    return 0; 
}

// File Written
