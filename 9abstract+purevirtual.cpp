// A pure virtual function is a function declared in a base class that has no implementation in the base class and must be overridden by any derived 
// class. 
//A class that contains at least one pure virtual function is known as an abstract class.

//u canot create an on object for abstract class
#include<iostream>
using namespace std;
class A{
    public:
    virtual void display()=0;
};

class B:public A{
    public:
  void display(){ //it is important to override or redefine the one in A else u cant create object of B also
    cout<<"B class"<<endl;
  }
};
int main(){
    //A obj; cannot do as A is abstract class
    B obj;
    obj.display();
}
