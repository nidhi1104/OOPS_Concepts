#include <iostream>
using namespace std;

//Static polymorpism/compiler time polymorphism:
//b) Operator Overloading:C++ also provides optionsto overload operators. 
//For example, we can make the operator (‘+’) for the string class to concatenate two strings. 
//We know that this is the addition operator whose task is to add two operands.
//A single operator, ‘+,’ when placed between integer operands, adds them and concatenates them when placed between string operands.

class B{
  public:
     int a;
     int b;
     int add(){
         return a+b;
     }
     
     void operator+(B& temp){
         int val1= this->a;
         int val2= temp.a;
         cout<<"operation : "<<val2-val1<<endl;
     }
};

int main()
{
    B obj1 , obj2;
    obj1.a=4;
    obj2.a=7;
    obj1+obj2;       //here we add two object and we use + operator to behave like - .
    
    obj1.a=7;
    obj1.b=3;
    cout<<obj1.a+obj1.b<<endl;       //normal add
    int x=obj1.add();    //simple add function called
    cout<<x<<endl;
    return 0;
}