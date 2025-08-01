#include <iostream>
using namespace std;

extern void two_five_nine(int array[], int n);

int main() {
    // Test 1: Array with 2, 5, and 9
    int test1[] = {2, 5, 9, 2, 5, 9, 2};
    cout << "Expected output:\n2:3; 5:2; 9:2;\n";
    cout << "Actual output:   " << endl;
    two_five_nine(test1, 7);

    // Test 2: Array with no 2, 5, or 9
    int test2[] = {1, 3, 4, 6, 7, 8};
    cout << "Expected output:\n2:0; 5:0; 9:0;\n";
    cout << "Actual output:   " << endl;
    two_five_nine(test2, 6);

    // Test 3: Array with only 2s
    int test3[] = {2, 2, 2, 2};
    cout << "Expected output:\n2:4; 5:0; 9:0;\n";
    cout << "Actual output:   " << endl;
    two_five_nine(test3, 4);

    return 0;
}