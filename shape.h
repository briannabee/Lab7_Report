#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>

using namespace std;

//Shape is an abstract class, meaning a class with a pure virtual function.
//Limitation of an abstract class: you can instantiate the class, meaning cannot create an object of the class
//Abstract class must be a base class, no instance of the class
class Shape
{
private:
    double x;  //instance data members --> when an object is created, the object will have its own RAM addresses / memory.
    //all member functions can access, including static.
    double y;  //instance data members
    static int num_objects;  //static data members exists in the global/static variable section of the virtual address space.
    //only static member functions can access.
public:
    Shape(); //instance member function --> this keyword
    Shape(double, double);  //instance member function 
    ~Shape();  //instance member function
    double get_x() const; //const means that the function will not modify the member variables
    double get_y() const;
    void set_coord(double,double);
    virtual double get_area() = 0; //pure virtual function
            //syntax: virtual return_type function_name() = 0;
            // = 0 ==> shape class must not define the function. no body!!!!
    void print_hello() const;
    static int get_num_objects(); //static member function, count the number of objects that have been created
};

#endif