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

int main()
{
    Colors InkColor = Colors::red;
    cout << InkColor.AsString() << endl;
    
    return 0;
}

// red
