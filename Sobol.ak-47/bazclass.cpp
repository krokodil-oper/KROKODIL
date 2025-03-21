#include <iostream>
#include <string>

using namespace std;

class Vehicle {
public:
    virtual void Move() {
    }
    virtual ~Vehicle() {} 
};

class Car : public Vehicle {
public:
    void Move() override {
    }
};

int main() {
    Vehicle* vehicle = new Vehicle();
    Vehicle* car = new Car();

    vehicle->Move(); 
    car->Move();     
}