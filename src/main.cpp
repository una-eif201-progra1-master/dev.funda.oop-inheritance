//
// Created by Maikol Guzman on 21/11/23.
//

#include "Car.h"

int main() {
    Car car1;
    Car::honk();  // Output: Tuut, tuut!
    cout << car1.brand + " " + car1.model;  // Output: Ford Mustang
    return 0;
}