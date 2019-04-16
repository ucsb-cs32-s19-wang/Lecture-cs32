// PERSON_H
#ifndef PERSON_H
#define PERSON_H

#include<string>

// Interface of a class representing a person
class person{
    public:
        person();
        person(std::string name, int age);
        person(person& person);

        person& operator=(const person& person);

        // accessor / getter
        std::string getName() const;
        int getAge() const;
        // mutater / setter
        void setName(std::string newName);
        void setAge(int age);

        std::vector<int>* getVector() const;
    private:
        std::string name;
        int age;
        std::vector<int>* v;
};

#endif