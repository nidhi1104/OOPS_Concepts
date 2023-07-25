#include <iostream>
using namespace std;

//An interface describes the behaviour or capabilities of a c++ class without committing to a particular implementation of that class

//c++ interfaces are implememnted using abstract classes. and these abstract class should not be confused with data abstraction
//abstraction is different concept in which we keep implemetation details seperate from associated data.
// A class is made abstract by declaring atleast one of the function as a pure virtual function
//every class which inherit that class must implement that function in their own class.

class Animal{
   public:
      //pure virtual function
      virtual void sound()=0;
      
      //normal member function
      void sleeping(){
          cout<<"Animal is sleeping"<<endl;
          }
};

class Dog: public Animal{
  public:
    void sound(){
        cout<<"Dog barks"<<endl;
    }
};

//every class have their own sound function which implements its own behaviour.
class Cat: public Animal{
    public:
        void sound(){
        cout<<"Cat meow"<<endl;
    }
       
};

int main()
{
    Cat obj1;
    obj1.sound();
    Dog obj2;
    obj2.sound();
    obj2.sleeping();
    return 0;
}