#include <iostream>
#include <vector>
#include <algorithm>
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"
using namespace std;

bool comparebyArea(Shape* s1, Shape* s2)
{
    return (s1->Area() < s2->Area());
}

int main()
{
    vector<Shape*> myShape;
    int choice;
    while (true)
    {
        cout << "-------------- Geometry Shape Analyzer --------------" << endl;
        cout << "1. Add Shape" << endl;
        cout << "2. Display All Shapes" << endl;
        cout << "3. Sort Shapes by Area" << endl;
        cout << "4. Search Shape by Perimeter" << endl;
        cout << "5. Delete a Shape" << endl;
        cout << "6. Undo Last Delete" << endl;
        cout << "7. Exit" << endl;
        cout << "-----------------------------------------------------" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            int c;
            cout << "1. Circle" << endl;
            cout << "2. Rectangle" << endl;
            cout << "3. Triangle" << endl;
            cout << "Choice: ";
            cin >> c;

            if (c == 1)
            {
                double r;
                cout << "Enter radius: ";
                cin >> r;
                myShape.push_back(new Circle(r));
            }
            else if (c == 2)
            {
                double l;
                double b;
                cout << "Enter length: ";
                cin >> l;
                cout << "Enter breadth: ";
                cin >> b;
                myShape.push_back(new Rectangle(l, b));
            }
            else if (c == 3)
            {
                double a;
                double b;
                double c;
                cout << "Enter Side A: ";
                cin >> a;
                cout << "Enter Side B: ";
                cin >> b;
                cout << "Enter Side C: ";
                cin >> c;
                myShape.push_back(new Triangle(a, b, c));
            }
            else
                cout << "Enter right choice" << endl;
        }
        else if (choice == 2)
        {
            if (myShape.size() == 0)
            {
                cout << "No Shape Present!\nAdd Shapes." << endl;
                continue;
            }
            for (int i = 0; i < myShape.size(); i++)
            {
                myShape[i]->displayShape();
            }
        }
        else if (choice == 3)
        {
            if (myShape.size() == 0)
            {
                cout << "No Shape Present!\nAdd Shapes." << endl;
                continue;
            }
            cout << "After sorting by area:" << endl;
            sort(myShape.begin(), myShape.end(), comparebyArea);
            for (int i = 0; i < myShape.size(); i++)
            {
                myShape[i]->displayShape();
                cout << "Area = " << myShape[i]->Area() << endl;
            }
        }
        else if (choice == 4)
        {
            if (myShape.size() == 0)
            {
                cout << "No Shape Present!\nAdd Shapes." << endl;
                continue;
            }
            bool found = false;
            double p;
            cout << "Enter you want to Search : ";
            cin >> p;
            for (int i = 0; i < myShape.size(); i++)
            {
                if (myShape[i]->Perimeter() == p)
                {
                    cout << "Shape found!" << endl;
                    myShape[i]->displayShape();
                    found = true;
                }
            }
            if (!found)
                cout << "Shape not found!" << endl;
        }
        else if (choice == 5)
        {
            if (myShape.size() == 0)
            {
                cout << "No Shape Present!\nAdd Shapes." << endl;
                continue;
            }
            for (int i = 0; i < myShape.size(); i++)
            {
                delete myShape[i];
            }
            myShape.clear();
            cout << "All Shape delete!" << endl;
        }
        else if (choice == 6)
        {
            if (myShape.size() == 0)
            {
                cout << "No Shape Present!\nAdd Shapes." << endl;
                continue;
            }
            myShape[myShape.size() - 1]->displayShape();
            cout << "Deleted!" << endl;
            delete myShape.back();
            myShape.pop_back();
        }
        else if (choice == 7)
        {
            for (int i = 0; i < myShape.size(); i++)
            {
                delete myShape[i];
            }
            myShape.clear();
            break;
        }
        else
            cout << "Enter right choice" << endl;
    }
    return 0;
}