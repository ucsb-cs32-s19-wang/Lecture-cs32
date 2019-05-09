#ifndef SHAPE_H
#define SHAPE_H

/**
 * if a pure virtual function, the class will be an abstract class,
 *  ABSTRACT CLASS
 *      - special type of class prevent programmer calling a method without an implementation
 */ 

class Shape{
    public:
        virtual double area() = 0; // pure virtual function
};

#endif // SHAPE_H