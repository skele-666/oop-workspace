#include <iostream>

extern int *readNumbers();
extern void printNumbers(int *numbers, int length);

int main() {
    // Test readNumbers() and printNumbers()
    int *arr = readNumbers();
    int length = 10;

    if (arr == nullptr) {
        std::cerr << "Error: could not allocate memory." << std::endl;
        return 1;
    }

    printNumbers(arr, length);

    delete[] arr;
    arr = nullptr;
    return 0;
}