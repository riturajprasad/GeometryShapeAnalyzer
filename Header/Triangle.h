#pragma once
#include "Shape.h"
#include <iostream>
using namespace std;

class Triangle : public Shape
{
    double SideA;
    double SideB;
    double SideC;

public:
    Triangle(double a, double b, double c);
    void displayShape() const override;
    double Area() const override;
    double Perimeter() const override;
};