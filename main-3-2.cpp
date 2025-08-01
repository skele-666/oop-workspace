#include <iostream>
using namespace std;

extern int median_array(int array[], int n);

int main() {
    // Test 1: Odd-sized array
    int array1[] = {3, 5, 2, 1, 4};
    cout << "Expected output: 3\nActual output:   " << median_array(array1, 5) << endl;

    // Test 2: Odd-sized array, different order
    int array2[] = {10, 1, 7, 3, 5};
    cout << "Expected output: 5\nActual output:   " << median_array(array2, 5) << endl;

    // Test 3: Even-sized array
    int array3[] = {1, 2, 3, 4};
    cout << "Expected output: 0\nActual output:   " << median_array(array3, 4) << endl;

    // Test 4: Empty array
    int array4[] = {};
    cout << "Expected output: 0\nActual output:   " << median_array(array4, 0) << endl;

    return 0;
}
