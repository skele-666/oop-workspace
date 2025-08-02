#include <iostream>
using namespace std;
extern bool is_fanarray(int array[], int n);

int main() {
    // Test 1: Palindrome array
    int array1[] = {1, 2, 3, 2, 1};
    cout << "Expected output: 1 (true)\nActual output:   " << is_fanarray(array1, 5) << endl;

    // Test 2: Non-palindrome array
    int array2[] = {1, 2, 3, 4, 5};
    cout << "Expected output: 0 (false)\nActual output:   " << is_fanarray(array2, 5) << endl;

    // Test 3: Empty array
    int array3[] = {};
    cout << "Expected output: 0 (false)\nActual output:   " << is_fanarray(array3, 0) << endl;

    return 0;
}