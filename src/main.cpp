//
// Created by Maikol Guzman on 21/11/23.
//

#include "Car.h"

/*! \mainpage OOP - Inheritance
 *
 * \section intro_sec Introduction
 *
 * This example is to show how to use inheritance in C++.
 * Inheritance allows us to define a class in terms of another class, which makes it easier to create and maintain
 * an application.
 */
int main() {
    Car car1;
    Car::honk();  // Output: Tuut, tuut!
    cout << car1.brand + " " + car1.model;  // Output: Ford Mustang
    return 0;
}