#include <iostream>
#include "Square.h"

using namespace std;

Square::Square(double side){ this->side = side; }

double Square::area(){
    cout << side * side <<endl;
    return side * side;
}