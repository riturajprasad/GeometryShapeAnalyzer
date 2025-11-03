#pragma once
#include "Shape.h"
#include <iostream>
using namespace std;

class Circle : public Shape
{
    double radius;

public:
    Circle(double r);
    void displayShape() const override;
    double Area() const override;
    double Perimeter() const override;
};