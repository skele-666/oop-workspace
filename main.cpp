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
	int n = 5;
	double* arr3 = dynamicArray(n);

	printArray(arr3, n);
	delete[] arr3;

	// Part 6
	int n2 = 9;
	double* arr4 = dynamicArray(n2);
	cout << "Max value in array: " << arrayMax(arr4, n2) << endl;
	delete[] arr4;

	// Part 7
	int n3 = 7;
	double* arr5 = dynamicArray(n3);

	printArray(arr5, n3);
	delete[] arr5;

	// Part 8
	int n4 = 6;
	double* arr6 = dynamicArray(n4);
	printArray(arr6, n4);
	cout << "Max value in array: " << arrayMax(arr6, 6) << endl;
	delete[] arr6;

	return 0;
}