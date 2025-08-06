#include <iostream>
using namespace std;

extern int sum_diagonal(int matrix[4][4]);

int main()
{
	// Test 1: 1 + 6 + 11 + 16 = 34
	int matrix[4][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
		{13, 14, 15, 16}};

	cout << "Expected output: 34\n" << "Actual output:   " << sum_diagonal(matrix) << endl;

	// Test 2: All diagonal elements are 10 -> 10 + 10 + 10 + 10 = 40
	int matrix2[4][4] = {
		{10, 0, 0, 0},
		{0, 10, 0, 0},
		{0, 0, 10, 0},
		{0, 0, 0, 10}};
	
	cout << "Expected output: 40\nActual output:   " << sum_diagonal(matrix2) << endl;

	// Test 3: Negative numbers -> -1 + -2 + -3 + -4 = -10
	int matrix3[4][4] = {
		{-1, 0, 0, 0},
		{0, -2, 0, 0},
		{0, 0, -3, 0},
		{0, 0, 0, -4}};
	
	cout << "Expected output: -10\nActual output:   " << sum_diagonal(matrix3) << endl;
	return 0;
}
