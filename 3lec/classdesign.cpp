#include <iostream>
#include <vector>
#include <string>
#include <map> //map
#include <utility>

#include "Person.h"

template<class T>
void printVector(std::vector<T>& v){
    for(int i = 0; i < v.size(); i++)
        std::cout << v[i] <<std::endl;
}

int main(){
    person s;
    person t = s;
    s.getVector()->push_back(200);
    printVector(*s.getVector());
    printVector(*t.getVector());

    std::cout << "\t------\t" <<std::endl;
    person a,b;
    a = b;
    printVector(*a.getVector());
    printVector(*b.getVector());
    return 0;
}