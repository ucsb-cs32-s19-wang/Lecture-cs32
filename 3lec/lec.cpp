#include <iostream>
#include <vector>
#include <string>
#include <map> //map
#include <utility>

template<class T>
void printVector(std::vector<T>& v){
    for(int i = 0; i < v.size(); i++)
        std::cout << v[i] <<std::endl;
}

int main(){
    // key has to be unique
    std::map<int, std::string> students;
    // use bracket notation for creation
        // the following is not indecies, but rather a key 
    students[0] = "Richert";
    students[1] = "John Doe";
    students[10] = "Jane Doe";

    std::cout << "Students[0] = " << students[0] <<std::endl;
    std::cout << "Students[1] = " << students[1] <<std::endl;
    std::cout << "Students[10] = " << students[10] <<std::endl;
    
    // we can check if the id exists
        // if not found, it returns students.end()
    if(students.find(1) == students.end()){
        std::cout<< "Can't find id == 1" <<std::endl;
    }else
        std::cout<< "Found student id, name =" << students[1] <<std::endl;
    
    // we can also insert
        // #include <utility>
        // by using .insert(std::pair<int, std::string>(#, string))
        // note: insert does not overwrite something already exists
    students.insert(std::pair<int, std::string>(10, "Jim One"));
    std::cout<< "Students[10] = " << students[10] <<std::endl;

    // use equal method to overwrite
    students[5] = "New Jim";
    std::cout<< "Students[5] = " << students[5] <<std::endl;

    // erase by iterator
    // students.erase()
    std::map<int, std::string>::iterator p = students.find(10);

    for(std::map<int, std::string>::iterator i = students.begin(); i != students.end();i++){
        std::cout << i->first << ": " << i->second <<std::endl;
    }

    return 0;
}