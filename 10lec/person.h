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
        virtual ~person() { std::cout << "Destructor in Person" << std::endl; };
        // use virtual enable polymorphic
        virtual std::string toString();     // use virtual at any layer
    private:
        std::string name;
        int age;
};

#endif // PERSON_H