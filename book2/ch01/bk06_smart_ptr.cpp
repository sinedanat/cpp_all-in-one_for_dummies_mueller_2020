#include <iostream>
#include <memory>
#include "bk02_pen.cpp"

using namespace std;

int main()
{
    unique_ptr<Pen> MyPen(new Pen());
    // MyPen.reset(new Pen());
    
    MyPen->InkColor = red;
    cout << MyPen->InkColor << endl;
    MyPen.reset();

    return 0;
}

// 1
