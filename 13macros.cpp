// In C++, macros are preprocessor directives that allow you to define pieces of code or values that are replaced by the preprocessor 
// before the program is compiled

#include <iostream>
using namespace std;

#define PI 3.14159  // Object-like macro
#define SQUARE(x) ((x) * (x))  // Function-like macro
int main() {
    cout << "Value of PI: " << PI << endl;  // Outputs: Value of PI: 3.14159
    int number=6;
     cout << "Square of " << number << " is " << SQUARE(number) << endl;
    return 0;
}
