#pragma once
#include "vehicle.h"

class Truck : public Vehicle
{
    double load;
    double max_load;

public:
    Truck(double load, double max_load, double petrol, double max_petrol);

    double get_current_load();
    double get_max_load();
    void arrive();
    bool leave();
};
