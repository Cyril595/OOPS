// Inline functions in programming are functions that are expanded in place at the point of use, rather than being called through the usual function
// call mechanism. This means that the compiler essentially replaces the function call with the actual code of the function, potentially improving 
//  performance by reducing the overhead of function calls.

 inline int add(int a, int b) {
    return a + b;
}

// Whenever you use add(a, b) in the code, the compiler will replace it with a + b directly.