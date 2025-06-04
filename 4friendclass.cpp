#include<iostream>
using namespace std;
class A {
    // Private and protected members
    private:
    int x;
    
    public:
     void setdata(int d){
        x=d;
     }

    // Declaring class B as a friend
    friend class B;  // B is a friend of A
};

class B {
    public:
    void display(A &a) {
        cout << "Accessing private member x of A: " << a.x << endl;
    }
};

int main() {
    A objA;
    B objB;
    objA.setdata(20);
    objB.display(objA);  // B can access private members of A due to friendship

    return 0;
}

