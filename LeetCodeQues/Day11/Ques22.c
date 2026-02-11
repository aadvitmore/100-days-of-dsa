/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** transpose(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes) {
    int rows = matrixSize;
    int cols = matrixColSize[0];
    
    int new_rows = cols;
    int new_cols = rows;
    
    int** res = (int**)malloc(sizeof(int*) * new_rows);
    
    *returnColumnSizes = (int*)malloc(sizeof(int) * new_rows);
    
    *returnSize = new_rows;
    
    for(int i = 0; i < new_rows; i++) {
        
        res[i] = (int*)malloc(sizeof(int) * new_cols);
        
        (*returnColumnSizes)[i] = new_cols;
        
        for(int j = 0; j < new_cols; j++) {
            res[i][j] = matrix[j][i];
        }
    }
    
    return res;
}
