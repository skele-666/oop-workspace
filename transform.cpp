#include <string>
#include <iostream>
using namespace std;

string transform(int n) {
    if (n < 1) {
        return "0";
    }

    string result = "";

    while (n > 0) {
        int quotient = n / 2; // Will be an int because both operands are ints
        int remainder = n - (quotient * 2);
        result = to_string(remainder) + result; // To reverse string by prepending each new result before the old one
        n = quotient;
    }

    return result;
}

int main() {
    // Test 1: 45
    cout << "Expected output: 101101\nActual output:   " << transform(45) << endl;

    // Test 2: 100
    cout << "Expected output: 1100100\nActual output:   " << transform(100) << endl;

    // Test 3: 37
    cout << "Expected output: 100101\nActual output:   " << transform(37) << endl;
}