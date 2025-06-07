//A pointer in C++ is a variable that stores the memory address of another variable.
#include<bits/stdc++.h>
using namespace std;
 void modify(int *a){
     *a=20; //modifying the value at the address pointed by a
 }
int main(){
    int a=10;
    int *ptr=&a; //pointer to a
    cout<<ptr<<endl; // to get the address of a or u can do cout<<&a<<endl;
    cout<<*ptr<<endl;// to get the value of a
    int **ptr2=&ptr; //pointer to pointer or we can say double pointer
    cout<<ptr2<<endl; // to get the address of ptr  
    cout<<*ptr2<<endl; // to get the value of ptr (which is the address of a)
    cout<<**ptr2<<endl; // to get the value of a (which is 10)
    modify(&a);
    cout<<a<<endl; // to get the modified value of a (which is now 20)
    cout<<&a<<endl; // to address is still the same
}
 
