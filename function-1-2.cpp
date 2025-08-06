int is_identity(int array[10][10]) {

	// Check diagonal is good
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
		if (i == j) { // If on main diagonal
				if (array[i][j] != 1) {
					return 0;
				}
			} else { // All other elements
				if (array[i][j] != 0) {
					return 0;
				}
			}
		}
	}

	return 1;
}