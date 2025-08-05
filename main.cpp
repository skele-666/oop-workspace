#include <iostream>
#include <string>

using namespace std;

extern string transform(int n);

int main() {
    // Test 1: 45
    cout << "Expected output: 101101\nActual output:   " << transform(45) << endl;

    // Test 2: 100
    cout << "Expected output: 1100100\nActual output:   " << transform(100) << endl;

    // Test 3: 37
    cout << "Expected output: 100101\nActual output:   " << transform(37) << endl;
}