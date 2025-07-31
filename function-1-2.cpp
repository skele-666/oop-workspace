double array_mean(int array[], int n) {
    if (n < 1) {
        return 0.0;
    }

    double avg;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += array[i];
    }

    avg = (double)sum / n;

    return avg;
}