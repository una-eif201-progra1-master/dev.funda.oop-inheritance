# Inheritance

HTML Documentation: [Class Doc](doc/html/index.html)

https://mikeguzman.dev/software-development/programming-fundations/object-oriented-programming/

```c++
// Example of Inheritance
class Vehicle {
  public:
    string brand = "Ford";

    void honk() {
        cout << "Tuut, tuut!" << endl;
    }
};

class Car: public Vehicle {
  public:
    string model = "Mustang";
};

int main() {
    Car car1;
    car1.honk();  // Output: Tuut, tuut!
    cout << car1.brand + " " + car1.model;  // Output: Ford Mustang
    return 0;
}

```

`Car` is a derived class that inherits from the base class `Vehicle`.
