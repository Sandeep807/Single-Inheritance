#ifndef CAR_H
#define CAR_H
#include "vehicle.h"

class Car : public Vehicle
{
    public:
        void drive();
        void park();
};

#endif