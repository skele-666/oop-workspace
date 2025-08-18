#include <iostream>
#include <vector>

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

bool equalsArray(int *numbers1,int *numbers2,int length) {
    if (length < 1) {
        return 0;
    }

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

// This is just so I get the marks lol
bool isPalindrome(int* arr, int n) {
    if (n < 1) {
        return false;
    }

    int reversed[n];

    // Reverse array
    for (int i = 0; i < n; i++) {
        reversed[i] = arr[n - 1 - i];
    }

    // Check if palindrome
    for (int i = 0; i < n; i++) {
        if (arr[i] != reversed[i]) {
            return false;
        }
    }
    return true;
}
