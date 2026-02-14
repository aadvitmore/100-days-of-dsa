void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    int n = matrixSize;
    int i, j, temp;

    // Step 1: Transpose the Matrix
    // We only traverse the upper triangle (j starts at i) to avoid double-swapping
    for(i = 0; i < n; i++) {
        for(j = i; j < n; j++) {
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    // Step 2: Reverse each row
    for(i = 0; i < n; i++) {
        int left = 0;
        int right = n - 1;
        
        while(left < right) {
            temp = matrix[i][left];
            matrix[i][left] = matrix[i][right];
            matrix[i][right] = temp;
            left++;
            right--;
        }
    }
}
