#include <iostream>
#include <string>
#include "student.h"
#include "person.h"

using namespace std;

void f1(person& p){
    cout << p.toString() <<endl;
}

void objectOnStack(){
    person p1("Richert", 21);
    student s1("Jone Doe", 21, 1234567);
    // memory slicing, on stack, but allowable
    person p2 = s1; // additional info on stack is cut
    cout << p2.getName() << endl;
    cout <<  p2.getAge() << endl;
    // cout <<  p2.getStudentID() <<endl;   base class type don't have access method

}

void objectOnHeap(){
    person* p1 = new person("r1", 10);
    student* s1 = new student("JD", 21, 1234567);

    person* p2 = s1;
    // obj on heap so no memory sliced
    cout << p2->getName() << endl;
    cout << p2->getAge() << endl;
    // cout << p2->getStudentID() <<endl;   base class type don't have access method
    cout << s1->getStudentID() <<endl;
}

void destructors(){
    person* p1 = new person("r1", 10);
    student* s1 = new student("JD", 21, 1234567);
    delete p1;
    cout << "------------" <<endl;
    delete s1;  // this will call the person's destructor as well
}

void polymorphism(){
    person p1("Richert", 21);
    cout << p1.toString() <<endl;
    student s1("Jone Doe", 18, 12345677);
    cout << s1.toString() <<endl;

    person* p2 = new person("Some one", 18);
    cout << p2->toString() <<endl;
    student* s2 = new student("some student", 20, 1234124);
    cout << s2->toString() <<endl;
    // ---------------------------------------------------------
    person* p3 = new student("persong-student", 21, 111111);
    cout << p3->toString() <<endl;

    student r = student("Richert", 1, 123490);
    cout << r.toString() <<endl;

    person s = student("T", 13, 12341234);
    cout << s.toString() <<endl;

    // ---------------------------------------------------------
    person* t = new student("N", 12, 123444);
    cout << t->toString() <<endl;
    cout << "-------" <<endl;
    cout << "-------" <<endl;
    cout << "-------" <<endl;
    f1(r);
    f1(s);
    f1(*t);
}

int main(){
    polymorphism();

    return 0;
}