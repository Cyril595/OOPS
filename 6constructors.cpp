#include<bits/stdc++.h>
using namespace std;
//constructors public karna warna object banane mein dikkat hogi
// A constructor is a special member function of a class in C++ that is automatically called when an object of that class is created.
 //Key Features:
// Has same name as the class.
// No return type, not even void.
// Used to initialize objects.
// Can be overloaded (i.e., multiple constructors with different parameters).
class A{
    int a;
    public:
    A(){//default constructor
        cout<<"hello default constructor called"<<endl;
    }
    A(int x){//parametrized constructor
        cout<<"hello parameterized constructor called "<<endl;
    }
    //above 2 are perfect example of constructor overloading

   //COPY CONSTRUCTOR
    A(A &obj){
        this->a=obj.a;
      cout<<"hello copy constructor called"<<endl;
    }

  //Destructors are Automatically called to release resources (memory, files, etc.).when an object goes out of scope or is explicitly deleted.


  ~A(){
    cout<<"destructor called"<<endl;//it will print 4 times becoz there are 4 objects
  }
};

int main(){
  A obj,obj2(10);
  A obj3(obj2);
  A obj4;
}