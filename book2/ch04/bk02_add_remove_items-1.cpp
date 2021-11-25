#include <iostream>
#include <string>

using namespace std;

class Observer;

class Subject
{
protected:
    int Count;
    Observer* List[100];
public:
    Subject()
    {
        Count = 0;
    }
    void AddObserver(Observer* Item);
    void RemoveObserver(Observer* Item);
    void Event();
};

class Observer
{
public:
    virtual void Respond() = 0;
};

class Dog : public Observer
{
public:
    void Respond();
};
class Police : public Observer
{
protected:
    string name;
public:
    Police(string myname)
    {
        name = myname;
    }
    void Respond();
};

void Dog::Respond()
{
    cout << "Bark bark" << endl;
}

void Police::Respond()
{
    cout << name << ": 'Drop the weapon! Now!'" << endl;
}

void Subject::AddObserver(Observer* Item)
{
    List[Count] = Item;
    Count++;
}

void Subject::RemoveObserver(Observer* Item)
{
    int i;
    bool found = false;

    for (i = 0; i < Count; i++)
    {
        if (!found && List[i] == Item)
        {
            found = true;
            List[i] = List[i + 1];
        }
    }

    if (found)
    {
        Count--;
    }
}

void Subject::Event()
{
    int i;

    for (i = 0; i < Count; i++)
    {
        List[i]->Respond();
    }
}

int main()
{
    Subject Alarm;
    Dog Fido;
    Police TJHooker("TJ");
    Police JoeFriday("Joe");

    Alarm.AddObserver(&Fido);
    Alarm.AddObserver(&TJHooker);
    Alarm.AddObserver(&JoeFriday);
    Alarm.RemoveObserver(&TJHooker);

    Alarm.Event();

    return 0;
}

// Bark bark
// Joe: 'Drop the weapon! Now!'
