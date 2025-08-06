#include <iostream>
#include <string>
using namespace std;

extern int binary_to_int(int binary_digits[], int number_of_digits);

int main() {
    // Test 1: 1101 = 13 
    int test1[] = {1, 1, 0, 1};
    cout << "Expected: 13\nActual:   " << binary_to_int(test1, 4) << endl;

    // Test 2: 0001 = 1 
    int test2[] = {0, 0, 0, 1};
    cout << "Expected: 1\nActual:   " << binary_to_int(test2, 4) << endl;

    // Test 3: 101010 = 42
    int test3[] = {1, 0, 1, 0, 1, 0};
    cout << "Expected: 42\nActual:   " << binary_to_int(test3, 6) << endl;

    return 0;
}