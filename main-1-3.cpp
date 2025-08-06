#include <iostream>
using namespace std;

extern void count_digits(int array[4][4]);

int main()
{
	// Test 1: Matrix with all numbers 1-9
	int test1[4][4] = {
		{0, 1, 2, 3},
		{4, 5, 6, 7},
		{8, 9, 0, 1},
		{2, 3, 4, 5}};

	cout << "Expected: 0:2;1:2;2:2;3:2;4:2;5:2;6:1;7:1;8:1;9:1;" << endl;
	cout << "Actual:   ";
	count_digits(test1);

	// Test 2: All elements are 9
	int test2[4][4] = {
		{9, 9, 9, 9},
		{9, 9, 9, 9},
		{9, 9, 9, 9},
		{9, 9, 9, 9}};
	
	cout << "Expected: 0:0;1:0;2:0;3:0;4:0;5:0;6:0;7:0;8:0;9:16;" << endl;
	cout << "Actual:   ";
	count_digits(test2);

	// Test 3: Only 0s and 1s
	int test3[4][4] = {
		{0, 1, 0, 1},
		{0, 1, 0, 1},
		{0, 1, 0, 1},
		{0, 1, 0, 1}};
	// 0:8, 1:8
	cout << "Expected: 0:8;1:8;2:0;3:0;4:0;5:0;6:0;7:0;8:0;9:0;" << endl;
	cout << "Actual:   ";
	count_digits(test3);

	return 0;
}
