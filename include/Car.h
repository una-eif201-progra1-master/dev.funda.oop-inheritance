//
// Created by Maikol Guzman on 21/11/23.
//

#ifndef MAIN_CAR_H
#define MAIN_CAR_H

#include "Vehicle.h"

/*!
 * \class Car
 * \brief The class Car inherits from Vehicle
 * \file Car.h
 * \brief The file Car.h is the header file of the class Car
 */

class Car : public Vehicle
{
public:
    string model = "Mustang";
};

#endif // MAIN_CAR_H
