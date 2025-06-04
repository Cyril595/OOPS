#include<iostream>
using namespace std;
  //polymorphism-compie time and run time 
//compile time polymorphism -function over loading and operator overloading

//here we will see binary and unary operator overloading

class A{
    int x=4;
    public:
    A operator + (A &obj){//Binary
        A res;
        res.x=this->x + obj.x;   // so ayaa pe obj2 call kar raha h(this) and obj3 is obj
        return res;
    }
    A operator -(){//Unary
        A res;
        res.x=--this->x;
        return res;
    }
    void getdata(){
        cout<<x<<endl;
    }
};
int main(){
    A obj1,obj2,obj3;
     obj1=obj2+obj3;  // jo + se pehle likha hoga wo call karega aur + ke baad wala object hoga ho paas hoga
    obj1.getdata();
     A obj4,obj5;
    obj5=-obj4;   //here obj4 is calling so this means obj4 only
     obj5.getdata();
    return 0;
}
   