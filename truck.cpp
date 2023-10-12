#include "truck.h"

Truck::Truck(double load, double max_load, double petrol, double max_petrol)
    : Vehicle(petrol, max_petrol), load(load), max_load(max_load) {}

double Truck::get_current_load()
{
    return load;
}

double Truck::get_max_load()
{
    return max_load;
}

void Truck::arrive()
{
    Base::vehicles_on_base++;
    Base::goods_on_base += load;
}

bool Truck::leave()
{
    if (!Vehicle::leave() || Base::goods_on_base < load)
    {
        return false;
    }

    Base::goods_on_base -= load;

    return true;
}
