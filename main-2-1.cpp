#include <iostream>

extern int *readNumbers();
extern void hexDigits(int *numbers,int length);

int main() {
    // Test hexDigits() with readNumbers()
    int *arr = readNumbers();
    int length = 10;

    if (arr == nullptr) { // sad :(
        std::cerr << "Error: could not allocate memory." << std::endl;
        return 1;
    }

    hexDigits(arr, length);

    delete[] arr;
    arr = nullptr;
}