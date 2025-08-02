bool is_fanarray(int array[], int n) {
    if (n < 1) {
        return false;
    }

    // Check if palindrome
    for (int i = 0; i < n / 2; i++) {
        if (array[i] != array[n - 1 - i]) {
            return false;
        }
    }

    // Check if elements up to middle are ascending
    for (int i = 0; i < (n - 1) / 2; i++) {
        if (array[i] >= array[i + 1]) {
            return false;
        }
    }

    return true;
}