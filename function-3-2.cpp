int median_array(int array[], int n) {
    if (n < 1 || n % 2 == 0) {
        return 0;
    }

    int sorted[n];

    for (int i = 0; i < n; i++) {
        sorted[i] = array[i];
    }

    int flag = false;
    int j = 0;
    int currentElement = array[0];
    while (!flag) {
        for (int i = j; i < n; i++) {
            if (sorted[i] < currentElement) {
                currentElement = sorted[i];
            }
        }

        sorted[j] = currentElement;
        j++;

        for (int i = 0; i < n - 1; i++) {
        if (array[i] > array[i + 1]) {
            continue;
        } else {
            flag = true;
        }
    }
    }
}