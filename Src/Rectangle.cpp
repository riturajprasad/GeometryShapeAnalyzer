#include "Rectangle.h"

Rectangle::Rectangle(double l, double b) : len(l), bth(b) { cout << "Rectangle created successfully!" << endl; }

void Rectangle::displayShape() const
{
    cout << "Rectangle" << endl;
}

double Rectangle::Area() const
{
    return len * bth;
}

double Rectangle::Perimeter() const
{
    return 2 * (len + bth);
}