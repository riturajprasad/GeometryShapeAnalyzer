#pragma once
#include "Shape.h"
#include <iostream>
using namespace std;

class Rectangle : public Shape
{
    double len;
    double bth;

public:
    Rectangle(double l, double b);
    void displayShape() const override;
    double Area() const override;
    double Perimeter() const override;
};