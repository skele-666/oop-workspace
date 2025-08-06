#include <iostream>
using namespace std;

extern void print_summed(int array1[3][3], int array2[3][3]);

int main() {
    // Test 1: All zeros
    int a1[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
    int a2[3][3] = {{0,0,0},{0,0,0},{0,0,0}};

    cout << "Expected:\n0 0 0\n0 0 0\n0 0 0" << endl;
    cout << "Actual:" << endl;
    print_summed(a1, a2);

    // Test 2: 0's and 1's
    int b1[3][3] = {{1,0,0},{0,1,0},{0,0,1}};
    int b2[3][3] = {{1,1,1},{1,1,1},{1,1,1}};

    cout << "Expected:\n2 1 1\n1 2 1\n1 1 2" << endl;
    cout << "Actual:" << endl;
    print_summed(b1, b2);

    // Test 3: 1-9 and 9-1
    int c1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int c2[3][3] = {{9,8,7},{6,5,4},{3,2,1}};

    cout << "Expected:\n10 10 10\n10 10 10\n10 10 10" << endl;
    cout << "Actual:" << endl;
    print_summed(c1, c2);

    return 0;
}
