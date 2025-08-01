bool is_fanarray(int array[], int n) {
    if (n < 1 || n > 1000) {
        return false;
    }

    int reverse[1000];

    for (int i = n - 1; i >= 0; i--) {
        reverse[i] = array[n - 1 - i];
    }

    for (int i = 0; i < n; i++) {
        if (array[i] != reverse[i]) {
            return false;
        }
    }

    return true;
}