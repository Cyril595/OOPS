#include <iostream>
using namespace std;

void greet(string name = "Guest", string greeting = "Hello") {
    cout << greeting << ", " << name << "!" << endl;
}

int main() {
    greet();                    // Outputs: Hello, Guest!
    greet("Alice");             // Outputs: Hello, Alice!
    greet("Bob", "Good morning"); // Outputs: Good morning, Bob!

    return 0;
}
