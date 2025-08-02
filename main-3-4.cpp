#include <iostream>
using namespace std;

extern void print_pass_fail(char grade);

int main() {
    // Test 1: Passing grade
    cout << "Expected output: Pass\nActual output:   ";
    print_pass_fail('B');

    // Test 2: Failing grade
    cout << "Expected output: Fail\nActual output:   ";
    print_pass_fail('E');

    // Test 3: Invalid grade
    cout << "Expected output: Nothing\nActual output:   ";
    print_pass_fail('Z');

    return 0;
}
