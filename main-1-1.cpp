#include <iostream>
using namespace std;

extern int array_sum(int array[], int n);

int main() {
    // Test 1: regular array
    int nums[] = {1, 2, 3};
    cout << "Expected output: 6\nActual output:   " << array_sum(nums, 3) << endl;

    // Test 2: empty array
    int nums2[] = {};
    cout << "Expected output: 0\nActual output:   " << array_sum(nums2, 0) << endl;

    // Test 3: single element array
    int nums3[] = {42};
    cout << "Expected output: 42\nActual output:   " << array_sum(nums3, 1) << endl;

    return 0;
}