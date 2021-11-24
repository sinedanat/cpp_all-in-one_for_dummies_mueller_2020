#include <iostream>

using namespace std;

class FrozenFood
{
private:
    int Price;
protected:
    int Weight;
public:
    FrozenFood(int APrice, int AWeight);
    int GetPrice();
    int GetWeight();
    virtual void BakeChemistry();
};

class FrozenPizza : public FrozenFood
{
protected:
    int Diameter;
public:
    FrozenPizza(int APrice, int AWeight, int ADiameter);
    void DumpInfo();
    void BakeChemistry() override;
};

class DeepDishPizza : public FrozenPizza
{
private:
    int Height;
public:
    DeepDishPizza(int APrice, int AWeight, int ADiameter, int AHeight);
    void DumpDensity();
};

FrozenFood::FrozenFood(int APrice, int AWeight)
{
    Price = APrice;
    Weight = AWeight;
}

int FrozenFood::GetPrice()
{
    return Price;
}

int FrozenFood::GetWeight()
{
    return Weight;
}

FrozenPizza::FrozenPizza(int APrice, int AWeight, int ADiameter)
    : FrozenFood(APrice, AWeight)
{
    Diameter = ADiameter;
}

void FrozenFood::BakeChemistry()
{
    cout << "Baking, baking, baking!" << endl;
}

void FrozenPizza::DumpInfo()
{
    cout << "\tFrozen pizza info:" << endl;
    cout << "\t\tWeight: " << Weight << " ounces" << endl;
    cout << "\t\tDiameter: " << Diameter << " inches" << endl;
}

void FrozenPizza::BakeChemistry()
{
    cout << "I'm getting crispy!" << endl;
}

DeepDishPizza::DeepDishPizza(int APrice, int AWeight,
                             int ADiameter, int AHeight)
    : FrozenPizza(APrice, AWeight, ADiameter)
{
    Height = AHeight;
}

void DeepDishPizza::DumpDensity()
{
    // Calculate pounds per cubic foot of deep-dish pizza
    cout << "\tDensity: ";
    cout << (Weight * 12 * 12 * 12 * 14) /
         (Height * Diameter * 22 * 16);
    cout << " pounds per cubic foot" << endl;
}

int main()
{
    cout << "Thin crust pepperoni" << endl;
    FrozenPizza pepperoni(450, 12, 14);
    pepperoni.DumpInfo();
    cout << "\tPrice: " << pepperoni.GetPrice() << " cents" << endl;
    pepperoni.BakeChemistry();

    cout << "Deep dish extra-cheese" << endl;
    DeepDishPizza extracheese(650, 21592, 14, 3);
    extracheese.DumpInfo();
    extracheese.DumpDensity();
    cout << "\tPrice: " << extracheese.GetPrice() << " cents" << endl;

    return 0;
}

// Thin crust pepperoni
//     Frozen pizza info:
//         Weight: 12 ounces
//         Diameter: 14 inches
//     Price: 450 cents
// I'm getting crispy!
// Deep dish extra-cheese
//     Frozen pizza info:
//         Weight: 21592 ounces
//         Diameter: 14 inches
//     Density: 35332 pounds per cubic foot
//     Price: 650 cents
