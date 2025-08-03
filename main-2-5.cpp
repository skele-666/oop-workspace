#include <iostream>
using namespace std;

extern bool is_descending(int array[], int n);

int main() {
    // Test 1: Check if array is in descending order
    int array[] = {1, 2, 3, 4, 5};

    if (is_descending(array, 5)) {
        cout << "The array is in descending order." << endl;
    } else {
        cout << "The array is not in descending order." << endl;
    }

    // Test 2: Check if array is not in descending order
    int array2[] = {5, 4, 3, 2, 1};
    if (is_descending(array2, 5)) {
        cout << "The array is in descending order." << endl;
    } else {
        cout << "The array is not in descending order." << endl;
    }
    
    return 0;
}