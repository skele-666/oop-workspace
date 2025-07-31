#include <iostream>
using namespace std;

extern int num_count(int array[], int n, int number);

int main() {
    // Test 1: Count occurrences of 3
    int array[] = {1, 2, 3, 4, 5, 3, 3};
    int n = 7;
    int number = 3;
    int count = num_count(array, n, number);

    cout << "Count of " << number << " in the array: " << endl;
    cout << "Expected: 3" << endl;
    cout << "Actual: " << count << endl;

    // Test 2: Count occurrences of 0 in empty array
    int array2[] = {};
    n = 0;
    number = 0;
    count = num_count(array2, n, number);

    cout << "Count of " << number << " in the array: " << endl;
    cout << "Expected: 0" << endl;
    cout << "Actual: " << count << endl;

    // Test 3: Count occurrences of 5 in array with no 5s
    int array3[] = {1, 2, 3, 4, 6, 7};
    n = 6;
    number = 5;
    count = num_count(array3, n, number);

    cout << "Count of " << number << " in the array: " << endl;
    cout << "Expected: 0" << endl;
    cout << "Actual: " << count << endl;

    return 0;
}