#include <iostream>

extern int* readNumbers();
extern bool equalsArray(int *numbers1,int *numbers2,int length);
extern int *reverseArray(int *numbers1,int length);

int main() {
    int* arr1 = readNumbers();
    int length = 10;
    
    if (arr1 == nullptr) {
        return 1;
    }

    int* arr2 = reverseArray(arr1, length);

    if (arr2 == nullptr) {
        return 1;
    }

    std::cout << equalsArray(arr1, arr2, length) << std::endl;

    delete[] arr1;
    delete[] arr2;
    arr1 = nullptr;
    arr2 = nullptr;

    return 0;
}