// The Diamond Problem in C++ is a well-known issue that arises due to multiple inheritance when two base classes 
// inherit from the same grandparent class, and a derived class inherits from both base classes. This creates ambiguity 
// about which path to take to access members of the grandparent class.

#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "A's show()" << endl;
    }
};

class B : public A {};
class C : public A {};
class D : public B, public C {};

int main() {
    D obj;
    // obj.show(); // ❌ Ambiguity: error: request for member ‘show’ is ambiguous
    obj.B::show(); // ✅ Works
    obj.C::show(); // ✅ Works
    return 0;
}
//D has two copies of class A: one from B and one from C, hence ambiguity.

//Solution: Use Virtual Inheritance
#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "A's show()" << endl;
    }
};

class B : virtual public A {};
class C : virtual public A {};
class D : public B, public C {};

int main() {
    D obj;
    obj.show(); // ✅ No ambiguity, only one instance of A
    return 0;
}

