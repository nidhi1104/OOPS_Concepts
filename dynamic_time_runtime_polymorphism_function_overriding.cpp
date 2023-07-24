#include<iostream>
using namespace std;

//Runtime polymorphism:  also known as dynamic polymorphism
//Method overriding is a way to implement runttime polymorphism
//Rules for method/function oveeriding:
//i) The method of parent and child class must have same name.
//ii) The method of parent and child class must have same parameters.
//iii) its possible through inheritance only



class A{
    public:
    void sayhello(){
        cout<<"I am parent"<<endl;
    }
};  
class B: public A{
    public:
    void sayhello(){
        cout<<"I do override parent class function"<<endl;
    }
};
int main(){
    B obj;
    obj.sayhello();
    return 0;
}