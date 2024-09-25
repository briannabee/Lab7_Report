#include <iostream>
#include "circle.h"

Circle::Circle() : Shape(), radius(0)
{
    cout << "Circle() called: " << this << endl;
    //radius = 0;
}
Circle::Circle(double x,double y,double r) : Shape(x,y), radius(r)
{
    cout << "Circle(double,double,double) called: " << this << endl;
}
Circle::~Circle()
{
    cout << "~Circle() called: " << this << endl;
}
double Circle::get_radius() const
{
    return radius;
}
double Circle::get_area()
{
    return radius * radius * 3.14;
}