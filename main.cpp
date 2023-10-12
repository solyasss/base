#include "base.h"
#include "vehicle.h"
#include "bus.h"
#include "truck.h"
#include <iostream>
using namespace std;

int main()
{
    Vehicle car(30.0, 50.0);
    Bus bus(20, 50, 20.0, 100.0);
    Truck truck(10.0, 20.0, 15.0, 80.0);

    car.arrive();
    bus.arrive();
    truck.arrive();

    if (car.leave())
    {
        cout << "Car left the base" << endl;
    }
    else
    {
        cout << "Car cant leave the base" << endl;
    }

    if (bus.leave())
    {
        cout << "Bus left the base" << endl;
    }
    else
    {
        cout << "Bus cant leave the base" << endl;
    }

    if (truck.leave())
    {
        cout << "Truck left the base" << endl;
    }
    else
    {
        cout << "Truck cant leave the base" << endl;
    }

    return 0;
}
