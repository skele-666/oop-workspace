#include <iostream>
#include <vector>
#include <algorithm>

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

int secondSmallestSum(int *numbers,int length) {
    std::vector<int> sums;

    // Length must be at least 2 so there can be a second smallest sum
    if (length < 2) {
        return 0;
    }

    for (int i = 0; i < length; i++) {
        int sum = 0;
        for (int j = i; j < length; j++) {
            sum += numbers[j];
            sums.push_back(sum);
        }
    }

    
    std::sort(sums.begin(), sums.end());

    return sums[1];
}