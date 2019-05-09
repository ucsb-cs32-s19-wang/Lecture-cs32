#include <iostream>
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(double length, double width){
    this->length = length;
    this->width = width;
}

double Rectangle::area(){
    cout << length * width <<endl;
    return length * width;
}