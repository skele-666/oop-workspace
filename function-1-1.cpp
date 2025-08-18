#include <iostream>

int* readNumbers() {
    int* arr = new int[10];

    if (arr == nullptr) {
        return nullptr;
    }

    for (int i = 0; i < 10; i++) {
        std::cin >> arr[i];
    }

    return arr;
}

void printNumbers(int *numbers, int length) {
    for (int i = 0; i < length; i++) {
        std::cout << i << " " << numbers[i] << std::endl;
    }
}