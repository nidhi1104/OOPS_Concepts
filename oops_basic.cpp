#include<iostream>
using namespace std;
class Atm{
    private:
    int pinno;             //private, only accessable inside class or can be accessed through getter and setter.
    
    public:
    string name;
    float balance;
    
    int getpin(){
        return pinno;
    }
    void setpin(int pin){
        this->pinno= pin;
    }
    
    void show(){
        cout<<"this is func"<<endl;
    }
    
    Atm(){
        cout<<"Default constructor called"<<endl;
    }
    
    Atm(string n, float balance){     //constructor
      name=n; 
      this->balance=balance;
      cout<<"Parametrised constructor called"<<endl;
    }
    
    Atm(Atm& temp){
        cout<<"copy constructor called"<<endl;
        this->name=temp.name;
    }
    
    ~Atm(){
        cout<<"Default Destructor called"<<endl;
    }
    
};

int main(){
    Atm *pnb = new Atm();           //dynamic object, default construtor called
    pnb->name="Bhavya";                 //dynamically set name
    cout<<"Your name is : " <<pnb->name<<endl;    // dynamically called 
    cout<<"pnb ends"<<endl;
    
    Atm hdfc;                                //static object , default constructer called 
    Atm sbi("Nidhi", 679.50);                 //paramaterised constrctor
    sbi.setpin(8989);
    cout<<"Your name is : "<<sbi.name<<endl;
    cout<<"Your pin is : "<<sbi.getpin()<<endl;
    cout<<"Your balance is : "<<sbi.balance<<endl;
    
    cout<<"Copy constructor starts: "<<endl;
    Atm bob(sbi);
    //if we dont make copy constructor in class, then it will do shallow copy 
    cout<<"sbi name: "<<sbi.name<<endl;     //here already name set to Nidhi
    cout<<"bob name: "<<bob.name<<endl;     //so if not any constrctor defined in class and if we trying to print bob name then ,Nidhi printed
    
    
    cout<<"explicitely called copy constructor"<<endl;
    //when we make explicitely copy constructor, then deep copy happen, so only memory created and not.
    //here if we want name for bob set to Nidhi as same of sbi , so in class we need to deep copy in this->name= temp.name where temp contains address of sbi.
    cout<<"sbi name: "<<sbi.name<<endl;     //here already name set to Nidhi
    cout<<"bob name: "<<bob.name<<endl;     //copy construtor called which we make explicitely.
   
    //another way to create copy constructor
    Atm ub= sbi;
    sbi.show();
    ub.show();    //same function called, as ub is copy of sbi so all function of sbi is same for ub.
    
    delete pnb;   //when you dynamically create an object, then this is the way to explicitely free the memory.
    
    cout<<"program ends"<<endl;
    
    //but if you create object statically then destructor automtically callled.
    return 0;
}
