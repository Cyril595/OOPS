#include<bits/stdc++.h>//multilevel inheritance + function overriding +scope resolution operator for defining a memberfunction outside the class
using namespace std;// 

class A{
    public:
    void print(){
        cout<<"Class A"<<endl;
    }
    int area();
};
//vip syntax
int A::area(){//defining area function outside the class using scope resolution operator
    return 0;
} //this is just an example of defining a function outside the class, it is not used in this code

class B : public A{
public:
  void print(){
       cout<<"Class B"<<endl;
  }
};

class C :public B{
    public:
    void print(){
        cout<<"Class C"<<endl;
    }
};

int main(){
     C objc;
     objc.print();//toh class c print hoga na k A because of overriding ,agr c waale print ko comment out kare toh class b print hoga 
    // usko bhi comment out kare toh class a print hoga
  
}
