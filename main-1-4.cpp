#include <iostream>
using namespace std;

extern int sum_two_arrays(int array[], int secondarray[], int n);

int main() {
    // Test 1: Two arrays with positive numbers
    int array1[] = {1, 2, 3};
    int array2[] = {4, 5, 6};
    int result1 = sum_two_arrays(array1, array2, 3);
    cout << "Expected output: 21\nActual output:   " << result1 << endl;

    // Test 2: Two arrays with mixed numbers
    int array3[] = {-1, -2, -3};
    int array4[] = {4, 5, 6};
    int result2 = sum_two_arrays(array3, array4, 3);
    cout << "Expected output: 9\nActual output:   " << result2 << endl;

    // Test 3: Two arrays with negative numbers
    int array5[] = {-1, -2, -3};
    int array6[] = {-4, -5, -6};
    int result3 = sum_two_arrays(array5, array6, 3);
    cout << "Expected output: -21\nActual output:   " << result3 << endl;

    return 0;
}