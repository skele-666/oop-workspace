#include <iostream>
#include <string>

using namespace std;

int binary_to_int(int binary_digits[], int number_of_digits) {
	string str_binary = "";

	for (int i = 0; i < number_of_digits; i++) {
		str_binary += to_string(binary_digits[i]);;
	}

	return stoi(str_binary, nullptr, 2);
}