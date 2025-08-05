#include <string>

std::string transform(int n) {
    if (n < 1) {
        return "0";
    }

    std::string result = "";

    while (n > 0) {
        int quotient = n / 2; // Will be an int because both operands are ints
        int remainder = n - (quotient * 2);
        result = std::to_string(remainder) + result; // To reverse string by prepending each new result before the old one
        n = quotient;
    }

    return result;
}