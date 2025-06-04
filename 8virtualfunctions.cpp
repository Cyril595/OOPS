#include<iostream>
using namespace std;
      //Runtime polymorphism ->function overriding and  virtual functions

      //virtual function allows base class function to redefine itself using pointers
      //basically ye hota h ki parent class ka pointer object banao
      //phir child class ka object banakr uska address uss pointer object mein daaldo
      //phir us parent class k pointer object se child class k functions ko call kar sakte h which we normally cant do
 class A{
    public:
    virtual void display1(){
        cout<<"A display1"<<endl;
    }
    void display2(){
        cout<<"A display2"<<endl;
    }
 };
  class B :public A{
    public:
    void display1(){
        cout<<"B display1"<<endl;
    }
    void display2(){
        cout<<"B display2"<<endl;
    }
 };

int main(){
   A obj1,*obj2;
   obj1.display1();//aise call karenge toh A display 1 he call hoga
   B obj3;
   obj2=&obj3;
   obj2->display1();
   obj2->display2();
  return 0;
}
