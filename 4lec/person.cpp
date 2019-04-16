#include <iostream>
#include <string>
#include <vector>
#include "Person.h"

person::person(){
    name = "-";
    age = 0;
    v = new std::vector<int>;
    v->push_back(100);
}

person::person(std::string name, int age){
    this->name = name;
    this->age = age;
}

person::person(person& person){
    this->name = person.name;
    this->age = person.age;
    // this->v = person.v; // shallow copy (sharing)
    this->v = new std::vector<int>;
    for(int i = 0; i < person.getVector()->size(); i++){
        v->push_back(person.getVector()->at(i));
    }
    std::cout << "Copy Constructor" <<std::endl;
}

person::~person(){
    std::cout << "~person: this obj address = " << v <<std::endl;
    delete v;
    std::cout << "deleted v" <<std::endl;
}

std::string person::getName() const{ return this->name; }
int person::getAge() const{ return this->age; }
void person::setName(std::string name){ this->name = name; }
void person::setAge(int age){ this->age = age; }
std::vector<int>* person::getVector() const{ return v; };

person& person::operator=(const person& person){
    std::cout << "overloaded assignment operator" <<std::endl;

    if(this == &person)
        return *this;
    this->name = person.name;
    this->age = person.age;
    this->v->clear();
    for(int i = 0; i < person.v->size(); i++)
        this->v->push_back(person.v->at(i));
    return *this;
}