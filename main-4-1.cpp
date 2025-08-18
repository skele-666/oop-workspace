#include <iostream>

extern int* readNumbers();
extern int secondSmallestSum(int *numbers, int length);

int main() {
    int* numbers = readNumbers();
    if (numbers == nullptr) {
        return 1;
    }

    int secondSmallest = secondSmallestSum(numbers, 10);
    std::cout << "The second smallest sum is: " << secondSmallest << std::endl;

    delete[] numbers;
    numbers = nullptr;
    return 0;
}