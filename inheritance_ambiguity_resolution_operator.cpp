
#include <iostream>
using namespace std;

//inhertance ambiguity: when child class inherit two different class and that both base class have same function, it will confuse and throws error
//so we call it via objname.classname::fun_name();

class Animal { 
    public: 
        void eat() { 
            cout << "eating" << endl;
            } 
            
        void abc(){
        cout<<"I am from animal"<<endl;
        }
    
}; 
// Parent class 
class Dog {
    public: 
     void bark() { 
         cout << "barking" << endl; 
     }
     void abc(){
        cout<<"I am from dog"<<endl;
          }
         
     
    
}; 
// Inherited class 
class BabyDog: public Animal ,public Dog{ 
    public: 
    void weep() { 
        cout << "weeping"<<endl;
        } 
    
    
    
}; 
int main() { // Creating an object of the child class 
BabyDog obj; // calling methods 
obj.eat(); 
obj.weep(); 
obj.Animal::abc();
obj.Dog::abc();
return 0; 
}