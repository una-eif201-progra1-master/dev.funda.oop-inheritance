//
// Created by Maikol Guzman on 21/11/23.
//

#ifndef MAIN_VEHICLE_H
#define MAIN_VEHICLE_H

#include <iostream>
#include <string>
using namespace std;

/*!
 * \class Vehicle
 * \brief The class Vehicle is the base class
 * \file Vehicle.h
 * \brief The file Vehicle.h is the header file of the class Vehicle
 */
class Vehicle
{
public:
    string brand = "Ford";

    static void honk()
    {
        cout << "Tuut, tuut!" << endl;
    }
};

#endif // MAIN_VEHICLE_H
