#include <iostream>

using namespace std;

class Creature {};

class Platypus : public Creature {};

void Feed1(Creature* c)
{
    cout << "Feed me!" << endl;
}

void Feed2(Creature** c)
{
    cout << "Feed me again!" << endl;
}

int main()
{
    // You don't always use polymorphism when you declare a variable.
    Platypus* plato1 = new Platypus;

    // You're free to pass the address of a Platypus object.
    Feed1(plato1);

    Platypus* plato2 = new Platypus;

    // Remember that when creating a pointer to a pointer,
    // the first pointer is the address of the second pointer variable.
    // However, with a function that takes
    // the address of a pointer variable
    // (note the two asterisks in the parameter)
    // you can't pass the address of a pointer to a Platypus instance.
    // Error - No matching function for call to 'Feed2'.
    Feed2(&plato2);

    return 0;
}

//
