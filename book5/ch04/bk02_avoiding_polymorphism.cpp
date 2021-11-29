#include <iostream>

using namespace std;

class Creature
{
public:
    void EatFood()
    {
        cout << "I'm eating!" << endl;
    }
};

class Platypus : public Creature
{
public:
    void SingLikeABird()
    {
        cout << "I'm siiiiiinging in the rain!" << endl;
    }
};

int main()
{
    Creature* plato1 = new Platypus;

    // The type of plato is a pointer to Creature.
    // But the object is a Platypus.
    // You can create a Platypus from a Creature
    // because a pointer to a base class can point
    // to an object of a derived class.
    // But now the compiler thinks that plato
    // is a pointer to a Creature instance,
    // so you can’t use plato to call a Platypus method
    // - you can use plato only to call Creature methods.
    // Error - No member named 'SingLikeABird' in 'Creature'.
    plato1->SingLikeABird();

    // You can fix the situation by casting, like this.
    Creature* plato2 = new Platypus;
    static_cast<Platypus*>(plato2)->SingLikeABird();

    // If you want to save some work,
    // start by declaring plato as type Platypus.
    Platypus* plato3 = new Platypus;
    plato3->SingLikeABird();

    return 0;
}

//
