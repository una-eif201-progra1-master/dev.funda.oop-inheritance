//
// Created by Maikol Guzman on 21/11/23.
//

#ifndef MAIN_CAR_H
#define MAIN_CAR_H

#include "Vehicle.h"

/*!
 * \class Car
 * \file Car.h
 * \brief The class Car inherits from Vehicle
 */

class Car : public Vehicle
{
public:
    string model = "Mustang";
};

#endif // MAIN_CAR_H
