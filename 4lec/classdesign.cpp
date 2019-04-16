#include <iostream>
#include <vector>
#include <string>
#include <map> //map
#include <utility>

#include "Person.h"
#include "F1.h"
#include "F2.h"
/**
 * Padding:
 * 
 * 
 * Struct and class
 *    Default:  
 *      Struct is public
 *      Class is private   
 *    Struct:
 *      size of an empty struct: one byte
 */
template<class T>
void printVector(std::vector<T>& v){
    for(int i = 0; i < v.size(); i++)
        std::cout << v[i] <<std::endl;
}

void someFunction(){
    std::cout << "main::someFunction()" << std::endl;
}

struct X{
    public:
        int a;      // size: 4
        short b;    // size: 2
        char c;     // size: 1
        char d;     // size: 1
};

struct Y{
    public:
        char a;     // size: 1
        int b;     // size: 4
        char c;     // size: 1
        short d;     // size: 2
};

struct Z{
    public:
        char a;    // 1
        int b;      // 4
        char c;     // 1
        double d;   // 8
};

int main(){
    std::cout<<std::endl;
    std::cout << "\t---BEGIN MAIN---" << std::endl;

    // struct
    X x;
    std::cout << "sizeof(x) = " << sizeof(x) <<std::endl; 
    // came out as 8
    std::cout << "&x.a = " << &x.a <<std::endl; 
    std::cout << "&x.b = " << &x.b <<std::endl; 
    std::cout << "&x.c = " << reinterpret_cast<void*>(&x.c) <<std::endl; 
    std::cout << "&x.d = " << reinterpret_cast<void*>(&x.d) <<std::endl; 
    Y y;
    std::cout << "\t-------------------------------------" <<std::endl;
    std::cout << "sizeof(y) = " << sizeof(y) <<std::endl;
    // came out as 12
    std::cout << "&y.a = " << reinterpret_cast<void*>(&y.a) <<std::endl; 
    std::cout << "&y.b = " << &y.b <<std::endl; 
    std::cout << "&y.c = " << reinterpret_cast<void*>(&y.c) <<std::endl; 
    std::cout << "&y.d = " << (&y.d) <<std::endl;
    Z z;
    std::cout << "\t-------------------------------------" <<std::endl;
    std::cout << "sizeof(z) = " << sizeof(z) <<std::endl;
    std::cout << "&z.a = " << reinterpret_cast<void*>(&z.a) <<std::endl; 
    std::cout << "&z.b = " << &z.b <<std::endl; 
    std::cout << "&z.c = " << reinterpret_cast<void*>(&z.c) <<std::endl; 
    std::cout << "&z.d = " << (&z.d) <<std::endl;
    // came out as 24

    // F2::string x;
    // x.someFunction();

    std::cout << "\t---EXIT MAIN---" << std::endl;
    std::cout<<std::endl;
    return 0;
}