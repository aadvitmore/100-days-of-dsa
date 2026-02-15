#include <stdio.h>

int main() {
    int m, n, i, j, sum = 0;
    int a[100][100];

    printf("Problem: Given a matrix, calculate the sum of its primary diagonal elements. The primary diagonal consists of elements where row index equals column index.\n");
    printf("Input:\n- First line: two integers m and n\n- Next m lines: n integers each\n");
    printf("Output:\n- Print the sum of the primary diagonal elements\n");
    printf("Example:\nInput:\n3 3\n1 2 3\n4 5 6\n7 8 9\nOutput:\n15\nExplanation: 1 + 5 + 9 = 15\n\n");

    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Enter matrix elements:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            if(i == j) {
                sum = sum + a[i][j];
            }
        }
    }

    printf("%d\n", sum);

    return 0;
}
