double weighted_average(int array[], int n) {
    if (n < 1) {
        return 0;
    }

    double total = 0;

    for (int i = 0; i < n; i++) {
        int freq = 0; // Inside the for loop to count array[i] (current number)

        for (int j = 0; j < n; j++) {
            if (array[j] == array[i]) {
                freq++;
            }
        }

        // Weighted formula
        total += array[i] * double(freq) / n;
    }

    return total;
}