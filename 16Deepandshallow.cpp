//Deep and shallow copy in c++

// Shallow Copy
// Whenever we do not create our own user-defined copy constructor and we do copying, the compiler creates its own hidden copy constructor.

// Whenever this happens the member variables etc share the same memory locations.
// Any change in object1 is also reflected in object2

// Deep Copy
// Whenever we create our own user-defined copy constructor and we do the copying.

// Whenever this happens the member variables etc for any objects have their own memory locations.
// For example, any change in object1 is not reflected in object2

//shallow copy example
#include <iostream>
using namespace std;
class Sample {
public:
    int* data;

    Sample(int val) {
        data = new int(val);
    }

    // Default copy constructor = shallow copy
};

int main() {
    Sample a(10);
    Sample b = a; // shallow copy

    *b.data = 20;
    cout << *a.data; // Output: 20 → a's data also changed!
}


//deepcopy example
class Sample {
public:
    int* data;

    Sample(int val) {
        data = new int(val);
    }

    // Deep copy constructor
    Sample(const Sample& other) {
        data = new int(*other.data);
    }

    ~Sample() {
        delete data;
    }
};

int main() {
    Sample a(10);
    Sample b = a; // deep copy

    *b.data = 20;
    cout << *a.data; // Output: 10 → no change in a!
}
