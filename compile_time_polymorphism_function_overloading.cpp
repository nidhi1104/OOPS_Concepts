#include<iostream>
using namespace std;


//Compile time polymorphism is also known as static polymorphism. 
//This type of polymorphism can be achieved through function overloading or operator overloading. 
//a) Function overloading:
//When there are multiple functionsin a class with the same name but different parameters,
//these functions are overloaded. 
//The main advantage of function overloading is it increases the readability of the program. 
//Functions can be overloaded by using different numbers of arguments and by using different types of arguments. 
//i) Function overloading with different numbers of arguments:
//ii) Function overloading with different types of arguments:

class A{
    public:
    void sayhello(){
        cout<<"say hello"<<endl;
    }
    
    //i) Function overloading with different numbers of arguments:
    void sayhello(string name){
        cout<<"say hello "<<name<<endl;
    }
    
    void sayhello(string name, int age){
        cout<<"say hello "<<name<<" . My age is "<<age<<endl;
    }
    
    
    //ii) Function overloading with different types of arguments:
    void sayhello(string name, double age){
        cout<<"say hello "<<name<<" . My age is "<<age<<endl;
    }
    void sayhello(int dob){
        cout<<"my dob is : "<<dob<<endl;
    }
    void sayhello(double dob){
        cout<<"my dob is : "<<dob<<endl;
    }
    
};
int main(){
    A obj;
    obj.sayhello();
    obj.sayhello("Nidhi");
    obj.sayhello("Bhavya",20);
    obj.sayhello("Bhavya",20.5);
    obj.sayhello(4);
    obj.sayhello(4.7);
    return 0;
}