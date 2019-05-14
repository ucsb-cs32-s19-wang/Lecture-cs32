#include <iostream>
#include <string>
#include "Shape.h"
#include "Rectangle.h"
#include "Square.h" 
using namespace std;

class X{
    public:
        short a;
        int b;
        X() { a = 10; b = 20; }
};

class Y : public X{
    public:
        short c, d;
        Y() : X() { c = 30; d = 40; }
};

void polyWithPadding(){
    X x;
    Y y;
    X z = y;

    cout << "&X = " << &x <<endl;
    cout << "&X.a = " << &x.a <<endl;
    cout << "&X.b = " << &x.b <<endl;
    cout << "----" <<endl;
    cout << "&Y = " << &y <<endl;
    cout << "&y.a = " << &y.a <<endl;
    cout << "&y.b = " << &y.b <<endl;
    cout << "&y.c = " << &y.c <<endl;
    cout << "&y.d = " << &y.d <<endl;
    cout << "----" <<endl;
    cout << "&z = " << &z <<endl;
    cout << "&z.a = " << &z.a <<endl;
    cout << "&z.b = " << &z.b <<endl;

}

void abstractClass(){
    Rectangle rec(2, 5);
    rec.area();

    Square* s = new Square(4);
    s->area();

    // Shape shape[2] has error
    Shape* shapes[2];    // this is allowed
    shapes[0] = new Square(10);
    shapes[1] = new Rectangle(2, 4);
    shapes[0]->area();
    shapes[1]->area();
}

class NegativeValueException{};
class EvenValueException{};
class DivideByZeroException{};

double divide(int numeraotr, int denominator) throw (DivideByZeroException) {
    if(denominator == 0)
        throw DivideByZeroException();
    return numeraotr/(double)denominator;
}

void exceptionHandling(){
    /**
     * When an error occurs, exception is thrown
     * The code that deals with the error condition is called
     * (the exception Handler) is said tocatch the exception
     */ 
    int value = 0;

    try{
        cout << divide(1, 1) <<endl;
        cout << divide(1, 0) <<endl;
        cout << divide(2, 2) <<endl;
    } catch (DivideByZeroException) {
        cout << "Error cannot divide by zero" <<endl;
    } catch(...){
        /** 
         *  (...) catch everything
         *  Too general, do not provide a specific problem
         */ 
    }

    cout << "after try Catch Block" <<endl;

    return;

    try{
        cout << "Enter a positive number: ";
        cin >> value;
        if(value < 0)   throw NegativeValueException();
        if(value % 2 == 0)  throw EvenValueException();    
        cout << "The number entered is: " << value << endl;
    } 
    catch (NegativeValueException e) {cout << "ERROR: Number is not positive" <<endl;}
    catch (EvenValueException e) {cout << "Error: Number is even" <<endl;}
    // continues after try and catch
    cout << "-----" <<endl;
    cout << "Statement after try/catch block" <<endl;
}

class A{};
class B : public A{};
class C{};

void exceptionOrder(){
    int value = 0;
    try{
        cout << "Enter a positive number" <<endl;
        cin >> value;
        if(value < 0) throw A();
    } catch (C){
        cout << "Exception of type C caught" << endl;
    } catch (B) {
        cout << "Exception of type B caught" <<endl;
    } catch (A) {
        cout << "Exception of type A caught" <<endl;
    }
}

int main(){ 
    // polyWithPadding();
    // abstractClass();
    // exceptionHandling();
    exceptionOrder();
    return 0;
}