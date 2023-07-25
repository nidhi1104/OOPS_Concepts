#include <iostream>
using namespace std;

//Friend function is defined outside that class's scope, but it has the right to access all private and protected members of that class
//even though the prototypes for friend functions appear in the class definition,friend are not member functions

class Rectangle{
   private:
      int length;
   public:
      Rectangle(){         //constructor 
          length=10;
      }
    friend int printlength(Rectangle);   //friend function
};

int printlength(Rectangle b){            //
    b.length+=10;
    return b.length;
    
}

int main()
{
    Rectangle rec;
    cout<<printlength(rec)<<endl;    //prints: 20
    return 0;
}