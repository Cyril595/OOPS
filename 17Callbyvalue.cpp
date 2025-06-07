//Call by value and call by referencein c++
#include <iostream>
using namespace std;    
   void modify1(int x){//call by value here x is a copy of the argument passed
         x=20;
   }
    void modify2(int &x){//here the reference or actual value is passed
         x=20 ;  } 

    int main(){
        int a=10;
        modify1(a); // Call by value, a remains 10
        modify2(a); // Call by reference, a is modified to 20
    }