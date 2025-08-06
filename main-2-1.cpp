#include <iostream>
#include <string>
using namespace std;

extern void print_binary_str(string decimal_number);

int main()
{
	// Test 1: 13
	cout << "Expected output: 1101\nActual output:   ";
	print_binary_str("13");

	// Test 2: 0
	cout << "Expected output: 0\nActual output:   ";
	print_binary_str("0");

	// Test 3: 255
	cout << "Expected output: 11111111\nActual output:   ";
	print_binary_str("255");

	return 0;
}
