#include <iostream>
#include <string>
#include "student.h"
#include "person.h"

using namespace std;

int main(){
    student s1("jimone", 3, 23333);
    cout << s1.getName() <<endl;
    return 0;
}