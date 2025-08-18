#include <iostream>
#include <vector>
#include <algorithm>

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

int secondSmallestSum(int *numbers,int length) {
    std::vector<int> sums;

    if (length < 1) {
        return 0;
    }

    for (int i = 0; i < length; i++) {
        int sum = 0;
        for (int j = i; j < length; j++) {
            sum += numbers[i];
            sums.push_back(sum);
        }
    }

    
    std::sort(sums.begin(), sums.end());

    return sums[1];
}