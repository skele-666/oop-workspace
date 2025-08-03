#include <iostream>
using namespace std;

extern int max_element(int array[], int n);

int main() {
    // Test 1: Array of positive numbers
    int array1[] = {1, 3, 5, 6, 7};
    int result1 = max_element(array1, 5);
    cout << "Expected output: 7\nActual output:   " << result1 << endl;

    // Test 2: Array of negative numbers
    int array2[] = {-1, -5, -89, -4};
    int result2 = max_element(array2, 4);
    cout << "Expected output: -1\nActual output:   " << result2 << endl;

    // Test 3: Empty array
    int array3[] = {};
    int result3 = max_element(array3, 0);
    cout << "Expected output: 0\nActual output:   " << result3 << endl;

    return 0;
}