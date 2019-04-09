// Standard Template Library (STL)
// Vecotrs, Iterators, Sets, and Maps

// Vector Constructor:
    // vector <int> c(100) //default make everything to be 0
    // vector <int> c(100, -1) // initialize to -1
// Vector Method:
    // v.at((int)index) return the value at some place
    // v.front() return the first value in the array
    // v.back() return the last value in the array
    // sizeof(v) return the size in bytes 
        // 24 for the vector of int
        // 8 for the vector to pointers (pointer address is 8)

// Sets
    // 当vector 在iterate 的时候 用的是小于
    // 但是sets iterate 的时候 用的是不等于号

#include <iostream>
#include <vector>
#include <cstdio>
#include <set>

using namespace std;

template<class T>
void printVector(vector<T> &v){
    for(int i = 0; i < v.size(); i++)
        cout << "v[" << i << "] = " << v[i] <<endl;
}

int main(){
    vector<int> v;
    for(int i = 0; i < 5; i++)  v.push_back(i);
    for(int i = 0; i < v.size(); i++)  v[i] *= 2;

    cout << v.at(4) <<endl;
    printf("v.front() = %i\n", v.front());
    printf("v.back() = %i\n", v.back());
    printVector(v);

    // 1. Constructor: construct v1 to have 100 elements initialized to -1
    cout << "\tVector Constructor" <<endl;
    vector<int> v1(2, -1);
    cout << "v1(2)" << endl;
    printVector(v1);
    cout << sizeof(v1) <<endl;

    // 2. vector of pointers
    cout << "\tVector of pointers" <<endl;
    vector<int>* vPointer = new vector<int>(10, 1);
    printf("size of the vecotr of pointers is, %lu\n", sizeof(vPointer));
    // 8 because these are address

    // 3. Iterator
    cout << "\tVector Iterator" <<endl;
    vector<int> vIterator;
    for(int i = 0; i < 5; i++) vIterator.push_back(i);

    // i is not pointer, but an iterator (similar to pointer)
    for(vector<int>::iterator i = vIterator.begin();
        i < vIterator.end(); i++) cout << *i <<endl;

    // string iterator
    cout << "\tString Vector" <<endl;
    vector<string> vString;
    vString.push_back("a");vString.push_back("bc");vString.push_back("cde");
    for(vector<string>::iterator i = vString.begin(); 
        i < vString.end(); i++) cout << *i << " " << i->size() <<endl;

    // 4. Sets
    cout << "\tSets" <<endl; 
    set<string> s;
    s.insert("Harry");
    s.insert("Hermione");
    s.insert("Ron");
    s.insert("Snape");

    for(set<string>::iterator i = s.begin();
    i != s.end(); i++) cout << *i <<endl;
    return 0;
}