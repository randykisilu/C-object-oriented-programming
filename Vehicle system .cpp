#include <iostream>
using namespace std;

// Base class
class Vehicle {
protected:
    string brand;
    int year;

public:
    void displayVehicle() {
        cout << "Brand: " << brand << endl;
        cout << "Year of Manufacture: " << year << endl;
    }
};

// Derived class
class Car : public Vehicle {
private:
    int doors;
    double engineCapacity;

public:
    void inputDetails() {
        cout << "Enter vehicle brand: ";
        cin >>brand;

        cout << "Enter year of manufacture: ";
        cin >> year;

        cout << "Enter number of doors: ";
        cin >> doors;

        cout << "Enter engine capacity (CC): ";
        cin >> engineCapacity;
    }

    void displayCar() {
        cout << "\nCAR DETAILS" << endl;
        displayVehicle();

        cout << "Number of Doors: " << doors << endl;
        cout << "Engine Capacity: " << engineCapacity << " CC" << endl;
    }
};

int main() {
    Car car;

    car.inputDetails();
    car.displayCar();

    return 0;
}
