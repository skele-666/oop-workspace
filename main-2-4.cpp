#include <iostream>
using namespace std;

extern int sum_min_max(int integers[], int length);

int main() {
	// Test 1: Mixed numbers
	int test1[] = {-2, 0, 7, 3, -5};
	cout << "Expected: 2\nActual:   " << sum_min_max(test1, 5) << endl;

	// Test 2: All elements the same
	int test2[] = {4, 4, 4, 4};
	cout << "Expected: 8\nActual:   " << sum_min_max(test2, 4) << endl;

	// Test 3: Invalid length (0)
	int test3[] = {};
	cout << "Expected: -1\nActual:   " << sum_min_max(test3, 0) << endl;

	return 0;
}
