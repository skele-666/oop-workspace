#include <iostream>
using namespace std;

extern double weighted_average(int array[], int n);

int main() {
    // Test 1: Mixed numbers, repetition
    int array1[] = {1, 2, 1, 4, 1, 3};
    cout << "Expected output: 3.0\nActual output:   " << weighted_average(array1, 6) << endl;

    // Test 2: All unique
    int array2[] = {1, 2, 3, 4, 7};
    cout << "Expected output: 3.4\nActual output:   " << weighted_average(array2, 5) << endl;

    // Test 3: Empty array
    int array3[] = {};
    cout << "Expected output: 0\nActual output:   " << weighted_average(array3, 0) << endl;

    return 0;
}
