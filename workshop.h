#include <iostream>

void changeValue(double* ptr) {
	*ptr = 42.0;
}

void printArray(double* arr, int n) {
	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << " ";
	}

	std::cout << std::endl;
}

double arrayMax(double* arr, int n) {
	double max = arr[0];

	for (int i = 0; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}

	return max;
}

double* dynamicArray(int N, double M = 3.5) {
	double* arr = new double[N];

	for (int i = 0; i < N; i++) {
		arr[i] = M;
	}

	return arr;
}