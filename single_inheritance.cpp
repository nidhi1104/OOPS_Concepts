
#include <iostream>
using namespace std;

class Animal{
    public:
       void eat(){
           cout<<"Every Animal can eat"<<endl;
       }
};

class Dog: public Animal {       //Dog class can inherit the properties of Animal in public mode.
                                //It cannot access private member , functions of Animal.
    public:
        void bark(){
            cout<<"Dog barks"<<endl;
        }
};

int main()
{
    Dog labra;
    labra.eat();        //child class object can access the Animal class function
    labra.bark();
    return 0;
}