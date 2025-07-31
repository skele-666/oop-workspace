#include <iostream>
using namespace std;

extern int count_evens(int number);

int main() {
    // Test 1: Count evens from 1 to 10
    int result1 = count_evens(10);
    cout << "Expected output: 5\nActual output:   " << result1 << endl;

    // Test 2: Count evens from 1 to 21
    int result2 = count_evens(21);
    cout << "Expected output: 10\nActual output:   " << result2 << endl;

    // Test 3: Count evens from 1 to 0 (edge case)
    int result3 = count_evens(0);
    cout << "Expected output: 0\nActual output:   " << result3 << endl;

    return 0;
}