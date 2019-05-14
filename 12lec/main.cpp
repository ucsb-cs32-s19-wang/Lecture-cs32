#include <iostream>

using namespace std;

class A{};
class B : public A{};
class C{};

int main(){
    int value = 0;
    try{
        cout << "Enter a positive number" <<endl;
        cin >> value;
        if(value < 0) throw B();
    } catch (C){
        cout << "Exception of type C caught" << endl;
    } catch (A) {
        cout << "Exception of type A caught" <<endl;
    } catch (B) {
        cout << "Exception of type B caught" <<endl;
    }
    return 0;
}