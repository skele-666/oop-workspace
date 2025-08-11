#include <iostream>
#include "workshop.h"
using namespace std;

int main() {
	// Part 2
	double d = 5.5;
	changeValue(&d);
	cout << d << endl;

	// Part 3
	double arr[] = {1.0, 2.45, 3.0, 4.0, 5.0, 6.0};
	printArray(arr, 6);

	// Part 4
	double arr2[] = {1.3, -3.4, 5.6, 0.03, 5.6};
	cout << "Max value in array: " << arrayMax(arr2, 5) << endl;

	// Part 5
	int N = 5;
	double* arr3 = dynamicArray(N);

	printArray(arr3, N);
	delete[] arr3;

	// Part 6
	double* arr4 = dynamicArray(9);
	cout << "Max value in array: " << arrayMax(arr4, 9) << endl;
	delete[] arr4;

	// Part 7
	int N2 = 7;
	double* arr5 = dynamicArray(N2);

	printArray(arr5, N2);
	delete[] arr5;

	// Part 8
	double* arr6 = dynamicArray(6);
	printArray(arr6, 6);
	cout << "Max value in array: " << arrayMax(arr6, 9) << endl;
	delete[] arr6;

	return 0;
}