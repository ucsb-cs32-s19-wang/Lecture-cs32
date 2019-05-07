#include <iostream>
#include <unordered_map>
#include <utility> // std::pair

// map functions:
        // insert, erase, find(), end(), begin()
        // unordered_map<int, string>::iterator p = students.find(1);

using namespace std;

int main(){

    unordered_map<int, string> students;

    students[0] = "A";
    students[1] = "B";
    students[2] = "C";
    students[25] = "D";

    cout << "students[1] = " << students[1] <<endl;
    cout << "students[25] = " << students[25] <<endl;
    cout << "students[2] = " << students[2] <<endl;

    // utility
        // insert
    students.insert(pair<int, string>(101, "EEEE"));    // set EEEE to 101

        // erase
    unordered_map<int, string>::iterator p = students.find(2);
    students.erase(p);
    
    if(students.find(1) != students.end()){
        cout << "Found Student[1], name = " << students[1] <<endl;
    }else cout << "Can't find ID = 1" <<endl;

    // print out entire map
    for(unordered_map<int, string>::iterator i = students.begin(); i != students.end(); i++)
        cout << i->first << ": " << i->second << endl;

    return 0;
}