#include "Triangle.h"

Triangle::Triangle(double a, double b, double c) : SideA(a), SideB(b), SideC(c) { cout << "Triangle created successfully!" << endl; }

void Triangle::displayShape() const
{
    cout << "Triangle" << endl;
}

double Triangle::Area() const
{
    double s = (SideA + SideB + SideC) / 2;
    return 0.5 * s * (s - SideA) * (s - SideB) * (s - SideC);
}

double Triangle::Perimeter() const
{
    return (SideA + SideB + SideC);
}