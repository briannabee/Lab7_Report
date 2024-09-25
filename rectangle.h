#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"

//Shape: base class, or parent class
//Rectangle: child class, or derived class
//class child : inheritance_mechanism_specifier parent
//public inheritance:
//In the shape, we have public members of Shape --> inherited and public member of child.
//Private member of the shape --> inherited but NOT accessible.
//protected member of the shape --> inherited, and protected members of child.
class Rectangle : public Shape
{
private:
    //add additional data members
    double width;
    double height;
public:
//each class must have its own constructor (including child)
    Rectangle();
    Rectangle(double,double,double,double);
    virtual ~Rectangle();
    double get_width() const;
    double get_height() const;
    void set_width(double);
    void set_height(double);
    virtual double get_area(); //gives the body to the inherited function, get_area()
    //the function signature cannot be changed.
    //called overriding --> only for virtual function
    //otherwise, called redefinition with the same signature
    void print_hello(int) const; //redefinition of the inherited print_hello(), non-virtual function
};
#endif