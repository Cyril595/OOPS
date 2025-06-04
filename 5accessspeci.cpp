#include<iostream>
using namespace std;
   //vvip note: private members are not inherited means we donot have the direct acces in the derived class but id doesnot mean that we cant
   //have instances of private members see the example below we are having x in class B also but cant acces in class B
class A {
  private:
  int x;
  protected:
  int y;
   public:
  int z;
  void setx(int val){
    this->x=val;
    cout<<this->x<<endl;
  }
  int getx(){
    return this->x;
  }
  
};
class B:public A{//public member remains public and protected remains protected and private not inherited
   public:
   int getx(){//get x is public
    return this->x;//but x was private,so in that sense we say that it cannot be inherited,but we can have the instance
  }
  void sety(int val){
    y=val;
  }
  int gety(int val){
     return this->y;//see y is protected but still accesible or inherited in derived class
  }
};
class C: private A{//public and protected became private 

};
class D: protected A{//public->protected,protected ->protected,private->private

};
int main(){
    B objb1,objb2;
    C objc;
   objb1.z=20;//possible
   objb1.setx(10);//possible
   objb2.setx(20);//possible
   cout<<objb1.getx()<<" "<<objb2.getx();//see class b can private members of A but just cannot directly acces it
}

