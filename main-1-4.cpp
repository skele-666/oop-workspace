#include <iostream>
using namespace std;

extern void print_scaled(int array[3][3], int scale);

int main() {
    int threebythree[3][3] = {
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8}
    };

    cout << "Expected output:" << endl;
    cout << "0 3 6" << endl;
    cout << "9 12 15" << endl;
    cout << "18 21 24" << endl;

    cout << "Actual output:" << endl;
    print_scaled(threebythree, 3);

    return 0;
}
