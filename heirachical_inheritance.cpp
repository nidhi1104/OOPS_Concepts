
#include <iostream>
using namespace std;

//hierarichal inheritance: when one class behaves as base class for more than one child class.

class Animal { 
    public: 
        void eat() { 
            cout << "eating" << endl;
            } 
    
}; 
// Parent class 
class Dog: public Animal {
    public: 
     void bark() { 
         cout << "barking" << endl; 
         
     } 
    
}; 
// Inherited class 
class BabyDog: public Animal { 
    public: 
    void weep() { 
        cout << "weeping";
        } 
    
}; 
int main() { // Creating an object of the child class 
BabyDog obj; // calling methods 
obj.eat(); 
// obj.bark();   //bark not called as it is not inherited
obj.weep(); 

return 0; 
}