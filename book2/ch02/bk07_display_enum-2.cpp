#include <iostream>
#include <string>

using namespace std;

class Colors
{
public:
    enum ColorEnum {blue, red, green};
    Colors(Colors::ColorEnum value);
    string AsString();
protected:
    ColorEnum value;
};

Colors::Colors(Colors::ColorEnum init)
{
    value = init;
}

string Colors::AsString()
{
    switch (value)
    {
        case blue:
            return "blue";

        case red:
            return "red";

        case green:
            return "green";

        default:
            return "Not Found";
    }
}

// To allow you to just call cout, as in cout << InkColor << endl;
// without having to call InkColor.AsString() to get a string version.
ostream& operator<<(ostream& out, Colors& color)
{
    out << color.AsString();

    return out;
}

int main()
{
    Colors InkColor = Colors::red;
    cout << InkColor << endl;

    return 0;
}

// red
