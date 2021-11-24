#ifndef PEN_HPP_INCLUDED
#define PEN_HPP_INCLUDED

#include <string>

using namespace std;

enum Color
{
    blue,
    red,
    black,
    clear,
    grey
};

enum PenStyle
{
    ballpoint,
    felt_tip,
    fountain_pen
};

class Pen
{
public:
    Color InkColor;
    Color ShellColor;
    Color CapColor;
    PenStyle Style;
    double Length;
    string Brand;
    int InkLevelPercent;
    void write_on_paper(string words);
    void break_in_half();
    void run_out_of_ink();
};

#endif // PEN_HPP_INCLUDED

//
