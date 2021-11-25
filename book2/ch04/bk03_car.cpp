#include <iostream>
#include "bk03_mediator.cpp"
#include "bk03_car_parts.cpp"

using namespace std;

int main()
{
    // Create a new car.
    Mediator* MyCar = new Mediator();

    // Start the engine.
    MyCar->MyEngine->Start();
    cout << "Engine Started!" << endl;

    // Accelerate.
    MyCar->MyWheels->Accelerate(20);
    cout << "The car is going: " <<
         MyCar->MyWheels->GetSpeed() << endl;

    // Apply the brakes.
    MyCar->MyBrakes->Apply(20);
    cout << "Applying the brakes." << endl;
    cout << "The car is going: " <<
         MyCar->MyWheels->GetSpeed() << endl;

    // Stop the car.
    MyCar->MyBrakes->Apply(80);
    cout << "Applying the brakes." << endl;
    cout << "The car is going: " <<
         MyCar->MyWheels->GetSpeed() << endl;

    // Shut off the engine.
    MyCar->MyEngine->Stop();
    cout << "Engine Stopped." << endl;

    return 0;
}

// Engine Started!
// The car is going: 20
// Applying the brakes.
// The car is going: 16
// Applying the brakes.
// The car is going: 0
// Engine Stopped.
