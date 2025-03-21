#include <iostream>
#include <cmath> 

using namespace std;

class Shape {
public:
    virtual double CalculateArea() = 0; 
    virtual ~Shape() {}
};
class Rectangle : public Shape {
private:
    double w;
    double h;

public:
    Rectangle(double w, double h) : w(w), h(h) {}
    double CalculateArea() override {
        return w * h;
    }
};
class Circle : public Shape {
private:
    double r;

public:
    Circle(double r) : r(r) {}
    double CalculateArea() override {
        return pow(r, 2); 
    }
};

int main() {
    double w, h, r;
    cout << "ширина ";
    cin >> w;
    cout << "Высота ";
    cin >> h;

    Shape* rectangle = new Rectangle(w, h);
    cout << "Площадь" << rectangle->CalculateArea();

    cout << "радиус круга ";
    cin >> r;

    Shape* circle = new Circle(r);
    std::cout << "Площадь круга " << circle->CalculateArea();

    delete circle; 

    return 0;
}