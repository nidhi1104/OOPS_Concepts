
#include <iostream>
using namespace std;

class Animal{
    private:
       string color;
    public:
       void eat(){
           cout<<"Every Animal can eat"<<endl;
       }
       
       void setcolor(string color){
           this->color=color;
       }
       
       string getcolor(){
           return color;
       }
};

class Dog: public Animal {       //Dog class can inherit the properties of Animal in public mode.
                                //It cannot access private member , functions of Animal.
    public:
        void bark(){
            cout<<"Dog barks"<<endl;
        }
};

class BabyDog: public Dog{               //multilevel inheritance
     public:
         void weep(){
             cout<<"Babydog weeps"<<endl;
         }

};
int main()
{
    BabyDog labra;
    labra.eat();        //child class object can access the Animal class function
    labra.bark();
    labra.setcolor("blue");
    cout<<"get color : "<<labra.getcolor()<<endl;
    labra.weep();
    return 0;
}