#include <iostream>
using namespace std;

extern double array_mean(int array[], int n);

int main() {
    // Test 1: Normal array
    int nums[] = {1, 3, 5, 7, 9, 4};
    cout << "Expected output: 4.83333\nActual output:   " << array_mean(nums, 6) << endl;

    // Test 2: Empty array
    int nums2[] = {};
    cout << "Expected output: 0\nActual output:   " << array_mean(nums2, 0) << endl;

    // Test 3: Negative integers
    int nums3[] = {-1, -2, -3, -4};
    cout << "Expected output: -2.5\nActual output:   " << array_mean(nums3, 4) << endl;

    return 0;
}