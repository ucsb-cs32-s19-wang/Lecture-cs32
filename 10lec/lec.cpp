#include <iostream>
#include <string>
#include "student.h"
#include "person.h"

using namespace std;

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

int main(){
    destructors();

    return 0;
}