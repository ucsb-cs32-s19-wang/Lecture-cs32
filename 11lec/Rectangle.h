#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"

class Rectangle : public Shape{
    public:
        Rectangle(double length, double width);
        virtual double area();

    private:
        double length, width;

};

#endif //RECTANGLE_H