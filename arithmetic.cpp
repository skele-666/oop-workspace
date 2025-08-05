#include <string>
#include <iostream>
#include <bitset>
using namespace std;

string transform(int n) {
    if (n < 1) {
        return "0";
    }

    string result = "";

    while (n > 0) {
        int quotient = n / 2; // Will be an int because both operands are ints
        int remainder = n - (quotient * 2);
        result = to_string(remainder) + result; // To reverse string by prepending each new result before the old one
        n = quotient;
    }

    return result;
} // Using for converting decimal back to binary

string add(string a, string b) {
	// Binary to decimal
	int decimalA = std::stoi(a, nullptr, 2);
	int decimalB = std::stoi(b, nullptr, 2);

	int decimalSum = decimalA + decimalB;

	return transform(decimalSum);
}

int main() {
    // Test 1: "101101" (45) + "1" (1) = "101110" (46)
    cout << "Test 1\nExpected output: 101110\nActual output:   " << add("101101", "1") << endl;

    // Test 2: "1100100" (100) + "10" (2) = "1100110" (102)
    cout << "Test 2\nExpected output: 1100110\nActual output:   " << add("1100100", "10") << endl;

    // Test 3: "100101" (37) + "11" (3) = "100110" (40)
    cout << "Test 3\nExpected output: 101000\nActual output:   " << add("100101", "11") << endl;

    return 0;
}
