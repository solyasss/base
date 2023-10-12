#include "bus.h"
#include <iostream>
using namespace std;

Bus::Bus(int people, int max_people, double petrol, double max_petrol)
    : Vehicle(petrol, max_petrol), people(people), max_people(max_people) {}

int Bus::get_people_count()
{
    return people;
}

int Bus::get_max_people()
{
    return max_people;
}

void Bus::arrive()
{
    Base::people_on_base += people;
    Base::vehicles_on_base++;
}

bool Bus::leave()
{
    if (!Vehicle::leave() || Base::people_on_base < people)
    {
        return false;
    }

    Base::people_on_base -= people;

    return true;
}
