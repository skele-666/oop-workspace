#include <iostream>

int* readNumbers() {
    int* arr = new int[10];

    if (arr == nullptr) {
        return nullptr;
    }

    for (int i = 0; i < 10; i++) {
        std::cout << "Enter number " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    return arr;
}

bool equalsArray(int *numbers1,int *numbers2,int length) {
    for (int i = 0; i < length; i++) {
        if (numbers1[i] != numbers2[i]) {
            return false;
        }
    }

    return true;
}

int *reverseArray(int *numbers1,int length) {
    int *numbers2 = new int[length];

    for (int i = 0; i < length; i++) {
        numbers2[i] = numbers1[length - 1 - i];
    }

    return numbers2;
}