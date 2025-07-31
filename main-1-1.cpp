#include <iostream>
using namespace std;

extern int array_sum(int array[], int n);

int main() {
    int nums[] = {1, 2, 3};

    cout << array_sum(nums, 3) << endl;

    return 0;
}