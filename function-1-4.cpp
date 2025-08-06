#include <iostream>

void print_scaled(int array[3][3],int scale) {
	// Multiply each element by 3, print it
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			std::cout << array[i][j] * scale << " ";
		}
		std::cout << std::endl;
	}
}