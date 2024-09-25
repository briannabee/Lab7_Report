#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"

class Circle : public Shape
{
private:
    double radius;
public:
    Circle();
    Circle(double,double,double);
    virtual ~Circle();
    double get_radius() const;
    virtual double get_area(); //give the body to the inherited get_area()
    //virtual keyword in the derived class is optional because it will stay a virtual
    //but writing it is still good habit.
};
#endif