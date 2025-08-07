#include <iostream>
using namespace std;

extern int sum_if_palindrome(int integers[], int length);

int main()
{
	// Test 1: Palindrome [1, 2, 3, 2, 1] -> sum = 9
	int test1[] = {1, 2, 3, 2, 1};
	cout << "Expected: 9\nActual:   " << sum_if_palindrome(test1, 5) << endl;

	// Test 2: Not a palindrome [1, 2, 3, 4, 5] -> return -2
	int test2[] = {1, 2, 3, 4, 5};
	cout << "Expected: -2\nActual:   " << sum_if_palindrome(test2, 5) << endl;

	// Test 3: Length 0 -> return -1
	int test3[] = {};
	cout << "Expected: -1\nActual:   " << sum_if_palindrome(test3, 0) << endl;

	return 0;
}
