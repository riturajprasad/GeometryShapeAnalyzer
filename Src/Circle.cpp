#include "Circle.h"

Circle::Circle(double r) : radius(r) { cout << "Circle created successfully!" << endl; }

void Circle::displayShape() const
{
    cout << "Circle" << endl;
}

double Circle::Area() const
{
    return 3.14 * radius * radius;
}

double Circle::Perimeter() const
{
    return 2 * 3.14 * radius;
}