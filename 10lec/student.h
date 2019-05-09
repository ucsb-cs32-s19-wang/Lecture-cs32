#ifndef STUDENT_H
#define STUDENT_H

#include "person.h"
#include <iostream>
class student: public person{
    public:
        student(std::string name, int age, int studentID);
        ~student() { std::cout << "Destructor in student" << std::endl; };
        int getStudentID();
        void setStudentID(int studentID);
        std::string getName();
        virtual std::string toString();
    private:
        int studentID;
};

#endif // STUDENT_H