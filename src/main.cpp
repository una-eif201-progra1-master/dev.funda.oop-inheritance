//
// Created by Maikol Guzman on 21/11/23.
//

/*! \mainpage Example of Inheritance in C++
 *
 * This example is to show how to use inheritance in C++.
 * Inheritance allows us to define a class in terms of another class, which makes it easier to create and maintain
 * an application.
 * 
 * <a href="https://github.com/una-eif201-progra1-master/dev.funda.oop-inheritance">Github Repository of the example</a> 
 * 
 * \date 2021-11-23
 * \copyright Maikol Guzman Alán - <a href="https://mikeguzman.dev/">mikeguzman.dev</a>
 */

#include "Car.h"

/*!
 * \file main.cpp
 * \brief The main.cpp file contains the entry point of the program.
 */
#include <iostream>
#include <cstdlib>

int main() {
    system("clear");
    std::cout << "Universidad Nacional de Costa Rica - mikeguzman.dev" << std::endl;
    Car car1;
    Car::honk();  // Output: Tuut, tuut!
    std::cout << car1.brand + " " + car1.model;  // Output: Ford Mustang
    std::cout << std::endl;
    return 0;
}