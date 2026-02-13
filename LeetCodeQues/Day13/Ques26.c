/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    int rows = matrixSize;
    int cols = matrixColSize[0];
    int total = rows * cols;
    
    int* res = (int*)malloc(sizeof(int) * total);
    *returnSize = total;
    
    int top = 0;
    int bottom = rows - 1;
    int left = 0;
    int right = cols - 1;
    int k = 0;
    
    while(top <= bottom && left <= right) {
        // left to right
        for(int i = left; i <= right; i++) {
            res[k++] = matrix[top][i];
        }
        top++;
        
        // top to bottom
        for(int i = top; i <= bottom; i++) {
            res[k++] = matrix[i][right];
        }
        right--;
        
        // right to left
        if(top <= bottom) {
            for(int i = right; i >= left; i--) {
                res[k++] = matrix[bottom][i];
            }
            bottom--;
        }
        
        // bottom to top
        if(left <= right) {
            for(int i = bottom; i >= top; i--) {
                res[k++] = matrix[i][left];
            }
            left++;
        }
    }
    
    return res;
}
