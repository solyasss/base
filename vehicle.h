#pragma once
#include "base.h"

class Vehicle
{
protected:
    double petrol_amount;
    double tank_volume;

public:
    Vehicle(double petrol_amount, double tank_volume);

    double get_tank_volume();
    double get_petrol_amount();
    void arrive();
    bool leave();
};
