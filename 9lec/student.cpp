#include <string>
#include "student.h"

using namespace std;

student::student(string name, int age, int id) : person(name, age){ studentID = id; }

int student::getStudentID() {return studentID;}

void student::setStudentID(int studentID){ this->studentID = studentID; }

string student::getName(){
    // return "STUDENT: "+ name;    ERROR, name isn't accessible
    return "STUDENT: " + person::getName();
}