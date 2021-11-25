// When you have an application that lets its users configure
// various observers, you may want to create and delete observers
// based on the configurations. In that case, it's possible
// to add an Observer to a Subject's list automatically
// when you create the Observer, and to remove the Observer
// from the list when you delete the Observer.
// To do this, you can call the AddObserver() method
// from within the constructor and call the RemoveObserver() method
// from within the destructor.
// To make this technique work, you need to tell the object
// who the Subject is by passing the name as a parameter to the constructor.
// Note that you have to move the Subject class above the Observer class
// because the Observer's constructor and destructor call into Subject.
// Also, note the AddObserver() and RemoveObserver() functions are protected.
// However, to allow the Observer class to use these functions,
// you need to add the word friend followed by the word Observer
// in the Subject class.

#include <iostream>
#include <string>

using namespace std;

class Observer;

class Subject
{
    friend class Observer;
protected:
    int Count;
    Observer* List[100];
    void AddObserver(Observer* Item);
    void RemoveObserver(Observer* Item);
public:
    Subject()
    {
        Count = 0;
    }
    void Event();
};

class Observer
{
protected:
    Subject* subj;
public:
    virtual void Respond() = 0;
    Observer(Subject* asubj)
    {
        subj = asubj;
        subj->AddObserver(this);
    }
    virtual ~Observer()
    {
        subj->RemoveObserver(this);
    }
};

class Dog : public Observer
{
public:
    void Respond();
    Dog(Subject* asubj) : Observer(asubj) {}
};

class Police : public Observer
{
protected:
    string name;
public:
    Police(Subject* asubj, string myname) : Observer(asubj)
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
    Police* TJHooker = new Police(&Alarm, "TJ");

    cout << "TJ on the beat" << endl;
    Alarm.Event();
    cout << "TJ off for the day" << endl;
    
    delete TJHooker;
    
    Alarm.Event();

    return 0;
}

// TJ on the beat
// TJ: 'Drop the weapon! Now!'
// TJ off for the day
