#include "vehicle.h"

Vehicle::Vehicle(double petrol_amount, double tank_volume)
    : petrol_amount(petrol_amount), tank_volume(tank_volume) {}

double Vehicle::get_tank_volume()
{
    return tank_volume;
}

double Vehicle::get_petrol_amount()
{
    return petrol_amount;
}

void Vehicle::arrive()
{
    Base::people_on_base++;
    Base::vehicles_on_base++;
}

bool Vehicle::leave()
{
    if (petrol_amount < tank_volume || Base::people_on_base == 0)
    {
        return false;
    }

    petrol_amount = tank_volume;

    Base::people_on_base--;
    Base::vehicles_on_base--;

    return true;
}
