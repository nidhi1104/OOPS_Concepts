
#include <iostream>
using namespace std;
//deep copy 

class Rectangle{
 
    
  public:
  int height;
  int length;
  int *breadth;
  
  
  Rectangle(int l, int b, int h){
      this->length=l;
      this->breadth= new int(b);  //allocate memory for new breadth
      this->height=h;
  }
  
  //copy constructor
  Rectangle(Rectangle &temp){
      this->length= temp.length;
      this->breadth= new int(*(temp.breadth)); //deep copy of breadth
      this->height= temp.height;
  }
  
  void printd(){
      cout<<this->length<<endl;
      cout<<this->breadth<<endl;
      cout<<this->height<<endl;
  }
  
  ~Rectangle() {
        delete breadth;
    }
  
};



int main()
{
    Rectangle rec(3,4,5);
    rec.printd();
    Rectangle rec1= rec;
    rec1.printd();
    

    return 0;
}
