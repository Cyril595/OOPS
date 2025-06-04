#include<bits/stdc++.h>
using namespace std;
class A {
    public:
  int count=0;
  static const int count1=10;//u can only initilasize static inside class if it is constant
  static int count2;//u have to declare it outside the class
  void print(){
    cout<<count<<" "<<count1<<" "<<count2<<endl;
  }
};
  int A ::count2=0;// vip notice scope resolution is used

int main(){
    A obj1,obj2;
    obj1.count+=10;
    obj2.count+=20;
    cout<<obj2.count<<endl;//it will be 20 only becoz obj2 is a new instance so count=0;
  //  obj1.count1+=100; not possible because it is coonstant
     obj1.count2+=10;
     obj2.count2+=20;
     cout<<obj2.count2;//it wii be 30 as it continues even if a new instace is created
}

