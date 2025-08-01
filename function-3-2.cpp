#include <iostream>
#include <algorithm>
using namespace std;

int median_array(int array[], int n) {
    if (n < 1 || n % 2 == 0) {
        return 0;
    }

    sort(array, array + n);

    int med = n / 2;

    return array[med];
}