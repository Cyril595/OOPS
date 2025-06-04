#include <iostream>//friend functions r not members of class but can acces the private and protected members of the class
using namespace std;
class A{
   int b;
   public:
   void setdata(int val){
        b=val;
   }
   friend int add(A &obj1,A &obj2);
};
 int add(A &obj1,A &obj2){
    return obj1.b+obj2.b;
 }
int main(){
  A obj1,obj2;
  obj1.setdata(5);
  obj2.setdata(10);
  int c=add(obj1,obj2);
  cout<<c<<endl;
}