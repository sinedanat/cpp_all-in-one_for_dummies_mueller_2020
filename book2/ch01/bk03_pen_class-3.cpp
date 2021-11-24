#include <iostream>
#include "bk02_pen.cpp"

using namespace std;

int main()
{
    Pen* MyPen;
    MyPen = new Pen;

    MyPen->InkColor = red;
    cout << MyPen->InkColor << endl;
    
    delete MyPen;
    MyPen = nullptr;

    return 0;
}

// 1
