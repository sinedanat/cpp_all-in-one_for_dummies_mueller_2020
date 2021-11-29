#include <iostream>
#include <string>

using namespace std;

class PAndP;

class Limited
{
public:
    void ShowProtected(PAndP&);
};

class PAndP
{
public:
    friend class Peeks;
    friend void Limited::ShowProtected(PAndP& X);
    friend void FriendFunction(PAndP& X);
protected:
    void IsProtected()
    {
        cout << "Protected" << endl;
    }
private:
    string var = "Var";

    void IsPrivate()
    {
        cout << "Private " << var << endl;
    }
};

class Peeks
{
public:
    void ShowProtected(PAndP& X)
    {
        X.IsProtected();
    }
    void ShowPrivate(PAndP& X)
    {
        X.var = "From Peeks";
        X.IsPrivate();
    }
};

void Limited::ShowProtected(PAndP& X)
{
    X.IsProtected();
}

void FriendFunction(PAndP& X)
{
    X.IsProtected();
    X.var = "From FriendFunction";
    X.IsPrivate();
}

int main()
{
    PAndP Hidden;
    Peeks ShowMe;
    Limited ShowMeAgain;

    ShowMe.ShowProtected(Hidden);
    ShowMe.ShowPrivate(Hidden);

    ShowMeAgain.ShowProtected(Hidden);

    FriendFunction(Hidden);

    return 0;
}

// Protected
// Private From Peeks
// Protected
// Protected
// Private From FriendFunction
