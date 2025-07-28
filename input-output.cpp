#include <iostream>

int main() {
    // std is the standard namespace
    // a namespace is a declarative region that provides a scope to the identifiers (the names of types, functions, variables, etc) inside it.

    int a = 0, b = 0, c = 0;

    std::cout << "Enter a:\n";
    std::cin >> a;
    
    std::cout << "Enter b:\n";
    std::cin >> b;
    
    c = a + b;
    std::cout << "The sum of a and b is: " << c << "\n";

    return 0;
}