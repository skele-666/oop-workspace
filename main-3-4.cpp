#include <iostream>
using namespace std;

extern void print_pass_fail(char grade);

int main() {
    // Test 1: Pass
    cout << "Expected output: Pass\nActual output:   ";
    print_pass_fail('B');

    // Test 2: Fail
    cout << "Expected output: Fail\nActual output:   ";
    print_pass_fail('E');

    // Test 3: Invalid
    cout << "Expected output: Nothing\nActual output:   ";
    print_pass_fail('Z');

    return 0;
}
