#include <iostream>
#include <string>

using namespace std;

enum StoreType
{
    Red,
    Blue,
    Green
};

template<typename V>
struct StoreOut
{
    V Value;
    StoreType Kind;
};

template<StoreType K, typename V>
class StoreIt
{
protected:
    V Value;
    StoreType Kind;
public:
    StoreIt()
    {
        Value = 0;
        Kind = K;
    }

    StoreIt(V value)
    {
        Value = value;
        Kind = K;
    }

    StoreOut<V>& getx();
    void setx(StoreType, V);
    string KindToString();
};

template<StoreType K, typename V>
StoreOut<V>& StoreIt<K, V>::getx()
{
    StoreOut<V>* Out = new StoreOut<V>();
    Out->Value = Value;
    Out->Kind = Kind;

    return *Out;
}

template<StoreType K, typename V>
void StoreIt<K, V>::setx(StoreType newT, V newV)
{
    Value = newV;
    Kind = newT;
}

template<StoreType K, typename V>
string StoreIt<K, V>::KindToString()
{
    switch (Kind)
    {
        case Blue:
            return "Blue";

        case Green:
            return "Green";

        case Red:
            return "Red";
    }

    return "Not Found";
}

int main()
{
    StoreIt<StoreType::Blue, int> Test1;
    Test1.setx(StoreType::Red, 5);

    StoreIt<StoreType::Red, int> Test2(6);

    cout << Test1.KindToString() << "\t" <<
         Test1.getx().Value << endl;

    if (Test1.KindToString() != "Blue")
        cout << "Test1 storage type changed." << endl;

    if (Test1.KindToString() == Test2.KindToString())
        cout << "Test1 and Test2 are of equal types." << endl;

    // cout << "Test1.Kind: " << Test1.KindToString() << endl;
    cout << "Test2.Kind: " << Test2.KindToString() << endl;

    return 0;
}

// Red 5
// Test1 storage type changed.
// Test1 and Test2 are of equal types.
// Test2.Kind: Red
