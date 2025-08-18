#include <iostream>

extern int* readNumbers();
extern void printNumbers(int *numbers, int length);
extern bool equalsArray(int *numbers1,int *numbers2,int length);

int main() {
    int* arr1 = readNumbers();
    int* arr2 = readNumbers();

    if (arr1 == nullptr || arr2 == nullptr) {
        return 1;
    }

    std::cout << equalsArray(arr1, arr2, 10) << std::endl;

    delete[] arr1;
    delete[] arr2;
    arr1 = nullptr;
    arr2 = nullptr;

    return 0;
}
