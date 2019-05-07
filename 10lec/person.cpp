#include <string>
#include <iostream>
#include "person.h"

using namespace std;

person::person(string name, int age){
    this->name = name;
    this->age = age;
}

string person::getName(){
    return name;
}

int person::getAge(){
    return age;
}

void person::setName(string name){
    this->name = name;
}

void person::setAge(int age){
    this->age = age;
}