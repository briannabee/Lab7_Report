#include "rectangle.h"

using namespace std;

Rectangle::Rectangle() : Shape() //if there is no : Shape(), the compiler calls the default constructor of the parent
                                // : width(0), height(0);
{
    // x = 10; !! impossible, because it is private to the parent function;
    //The member functions of a child class cannot directly access the private members of the parent
    //The only way to initialize the private members of the parent is to call the constructor of the parent
    //Shape(); do not call the default constructor of the parent in the body of the child.
    cout << "Rectangle() called\n";
    width = 0;
    height = 0;
}
Rectangle::Rectangle(double x,double y, double w, double h) : Shape(x, y), width (w), height(h)
{
    cout << "Rectangle(double,double,double,double) called\n";
    //body is empty
    //: member initializer
}
Rectangle::~Rectangle()
{
    cout << "~Rectangle() called\n";
}
double Rectangle::get_width() const
{
    return width;
}
double Rectangle::get_height() const
{
    return height;
}
void Rectangle::set_width(double w)
{
    width = w;  //this->width = w; not necessary in this case,
}
void Rectangle::set_height(double h)
{
    height = h;
}
double Rectangle::get_area()
{
    return height * width;
}