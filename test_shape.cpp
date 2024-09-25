#include <iostream>
#include "shape.h"
#include "rectangle.h"
#include "circle.h"

using namespace std;

int main()
{
    /*
    Rectangle r1(1,2,3,4);
    cout << "Area of r1 = " << r1.get_area() << endl;

    Circle* p = new Circle(10,15,5);
    cout << "Area of the circle on the heap: " << p->get_area() << endl;
    delete p;
    */
    //Shape s; cannot create an object of an abstract class
    Shape* p[2]; //simply pointers, no object creation
    p[0] = new Rectangle(1,2,3,4); //Shape* = Rectangle*
                                    //Base* = Child* is possible but only when the child is derived using public inheritance
    p[1] = new Circle(10,20,5);
        //Base* = Child*

    //polymorphic code:
    p[0]->get_area(); //Base*->virtual_function()  --> the Object's get_area() is called
                        //although the type of the pointer is Shape*
                        //the get_area() of the object that the pointer points to
    p[1]->get_area();

    //How to implement polymorphism
    //1. a base class with a virtual function, pure or non-pure
    //2. a child class is defined using public inheritance
    //3. the child class overrides the inherited virtual function
    //4. In the program that uses those two classes,
    //a. use a pointer to a bass class (pointer type, Base*) that points to an object of the child class.
    //e.g. Base* p = new Child
    //b. using the pointer, call the virtual function
    //e.g. p->get_area(); //polymorphic doe:
                //the type of p is Base(, but the invoked function is from the Child class)

    delete p[0];
    delete p[1];

    Shape* q = new Rectangle[3];
    delete[] q;
    
    return 0; 
}