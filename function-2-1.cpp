#include <iostream>
#include <string>
using namespace std;

void print_binary_str(string decimal_number)
{
	int n = stoi(decimal_number);

	if (n == 0)
	{
		cout << "0" << endl;
		return;
	}

	string result = "";

	while (n > 0)
	{
		int quotient = n / 2; // Will be an int because both operands are ints
		int remainder = n - (quotient * 2);
		result = to_string(remainder) + result; // To reverse string by prepending each new result before the old one
		n = quotient;
	}

	cout << result << endl;
}
