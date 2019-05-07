#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>
class person{
    public:
        person(std::string name, int age);
        std::string getName();
        int getAge();
        void setName(std::string name);
        void setAge(int age);
        ~person() { std::cout << "Destructor in Person" << std::endl; };
    private:
        std::string name;
        int age;
};

#endif // PERSON_H