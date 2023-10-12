#pragma once
#include "vehicle.h"

class Bus : public Vehicle
{
    int people;
    int max_people;

public:
    Bus(int people, int max_people, double petrol, double max_petrol);

    int get_people_count();
    int get_max_people();
    void arrive();
    bool leave();
};
