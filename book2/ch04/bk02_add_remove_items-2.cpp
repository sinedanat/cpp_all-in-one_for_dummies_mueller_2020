// Note that the list saves pointers to Observer;
// not the Observer instances themselves.
// That's because, by default, the list class
// makes a copy of whatever you put in the array.
// If you put in an actual instance, the list class
// will make a copy (which creates problems with derived classes
// because the list copies only the object being stored
// as an Observer instance, not a class derived from Observer).
// With pointers, a copy of a pointer still points
// to the original object, and therefore the items in the list
// are the originals (at least their addresses are in the list).
// The list can also add and remove items
// without needing the program to loop through
// all the items, as occurs when using an array.

#include <iostream>
#include <string>
#include <list>

using namespace std;

class Observer;

class Subject
{
protected:
    list<Observer*> OList;
public:
    void AddObserver(Observer* Item);
    void RemoveObserver(Observer* Item);
    void Event();
};

class Observer
{
public:
    virtual void Respond() {}
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
    OList.push_back(Item);
}

void Subject::RemoveObserver(Observer* Item)
{
    OList.remove(Item);
}

void Subject::Event()
{
    list<Observer*>::iterator iter;

    for (iter = OList.begin(); iter != OList.end(); iter++)
    {
        Observer* item = (*iter);
        item->Respond();
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
