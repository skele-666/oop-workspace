#include <iostream>
using namespace std;

extern bool is_ascending(int array[], int n);

int main() {
    // Test 1: Check if array is in ascending order
    int array[] = {1, 2, 3, 4, 5};

    if (is_ascending(array, 5)) {
        cout << "The array is in ascending order." << endl;
    } else {
        cout << "The array is not in ascending order." << endl;
    }

    // Test 2: Check if array is not in ascending order
    int array2[] = {5, 3, 4, 2, 1};
    if (is_ascending(array2, 5)) {
        cout << "The array is in ascending order." << endl;
    } else {
        cout << "The array is not in ascending order." << endl;
    }
    
    return 0;
}