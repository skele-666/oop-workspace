char transfrom(int n) {
    int binary[] = {};
    int i = 0;

    while (n > 0) {
        int quotient = n / 2; // Will be an int because both operands are ints
        int remainder = (quotient * 2) - n;
        binary[i] = remainder;
        i++;

    }
}