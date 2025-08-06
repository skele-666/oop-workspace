#include <iostream>
using namespace std;

extern int is_identity(int array[10][10]);

int main()
{
	// Test 1: Valid identity matrix
	int identity[10][10] = {0};
	for (int i = 0; i < 10; i++)
	{
		identity[i][i] = 1;
	}
	cout << "Expected: 1\nActual:   " << is_identity(identity) << endl;

	// Test 2: Matrix with a 2 on the diagonal
	int bad_diagonal[10][10] = {0};
	for (int i = 0; i < 10; i++)
	{
		bad_diagonal[i][i] = 1;
	}
	bad_diagonal[2][2] = 2; // wrong value on the diagonal
	cout << "Expected: 0\nActual:   " << is_identity(bad_diagonal) << endl;

	// Test 3: Matrix with a 1 off the diagonal
	int off_diag[10][10] = {0};
	for (int i = 0; i < 10; i++)
	{
		off_diag[i][i] = 1;
	}

	// Add wrong value
	off_diag[0][1] = 1;
	cout << "Expected: 0\nActual:   " << is_identity(off_diag) << endl;

	return 0;
}
