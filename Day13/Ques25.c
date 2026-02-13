#include <stdio.h>

int main() {
    int r, c, i, j;
    int arr[100][100];
    int top, bottom, left, right;

    printf("Problem: You are given a rectangular matrix of integers. Starting from the outer boundary, traverse the matrix in a clockwise manner and continue moving inward layer by layer until all elements are visited.\n");
    printf("Input:\n- First line: two integers r and c representing the number of rows and columns\n");
    printf("- Next r lines: c integers each representing the matrix elements\n");
    printf("Output:\n- Print all visited elements in the order of traversal, separated by spaces\n");
    printf("Example:\nInput:\n3 3\n1 2 3\n4 5 6\n7 8 9\nOutput:\n1 2 3 6 9 8 7 4 5\n");
    printf("Explanation: The traversal begins along the top row, proceeds down the rightmost column, then moves across the bottom row in reverse, and finally goes up the leftmost column.\n\n");

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    top = 0;
    bottom = r - 1;
    left = 0;
    right = c - 1;

    printf("Output: ");
    while(top <= bottom && left <= right) {
        for(i = left; i <= right; i++) {
            printf("%d ", arr[top][i]);
        }
        top++;

        for(i = top; i <= bottom; i++) {
            printf("%d ", arr[i][right]);
        }
        right--;

        if(top <= bottom) {
            for(i = right; i >= left; i--) {
                printf("%d ", arr[bottom][i]);
            }
            bottom--;
        }

        if(left <= right) {
            for(i = bottom; i >= top; i--) {
                printf("%d ", arr[i][left]);
            }
            left++;
        }
    }

    return 0;
}
