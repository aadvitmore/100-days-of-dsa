#include <stdio.h>

int main() {
    int m, n, i, j;
    int a[100][100], b[100][100], sum[100][100];

    printf("Problem: Write a program to perform addition of two matrices having the same dimensions.\n");
    printf("Input:\n- First line: two integers m and n representing the number of rows and columns\n");
    printf("- Next m lines: n integers each representing the elements of the first matrix\n");
    printf("- Next m lines: n integers each representing the elements of the second matrix\n");
    printf("Output:\n- Print the resultant matrix after addition\n");
    printf("Example:\nInput:\n3 3\n1 2 3\n4 5 6\n7 8 9\n9 8 7\n6 5 4\n3 2 1\nOutput:\n10 10 10\n10 10 10\n10 10 10\n\n");

    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Enter elements of first matrix:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    printf("Resultant Matrix:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}

