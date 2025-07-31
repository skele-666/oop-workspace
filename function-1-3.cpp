int num_count(int array[], int n, int number) {
    if (n < 1) {
        return 0;
    }
    
    int numEqualElements = 0;

    for (int i = 0; i < n; i++) {
        if (array[i] == number) {
            numEqualElements++;
        }
    }

    return numEqualElements;
}