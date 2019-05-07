#ifndef STUDENT_H
#define STUDENT_H

#include "person.h"

class student: public person{
    public:
        student(std::string name, int age, int studentID);
        int getStudentID();
        void setStudentID(int studentID);
        std::string getName();
    private:
        int studentID;
};

#endif // STUDENT_H