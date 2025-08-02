#include <iostream>
using namespace std;

extern double sum_even(double array[], int n);

int main() {
    // Test 1: Normal
    double array1[] = {1.5, 2.0, 3.5, 4.0, 5.5};
    cout << "Expected output: 10.5\nActual output:   " << sum_even(array1, 5) << endl;

    // Test 2: All values at odd indexes
    double array2[] = {0.0, 1.0, 0.0, 1.0};
    cout << "Expected output: 0.0\nActual output:   " << sum_even(array2, 4) << endl;

    // Test 3: Empty array
    double array3[] = {};
    cout << "Expected output: 0.0\nActual output:   " << sum_even(array3, 0) << endl;

    return 0;
}
