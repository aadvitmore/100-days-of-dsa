#include <stdio.h>

int main() {
    int m, n, i, j, is_sym = 1;
    int a[100][100];

    printf("Problem: Write a program to check whether a given matrix is symmetric.\n");
    printf("Input:\n- First line: two integers m and n representing the number of rows and columns\n");
    printf("- Next m lines: n integers each representing the elements of the matrix\n");
    printf("Output:\n- Print 'Symmetric Matrix' if the given matrix is symmetric\n- Otherwise, print 'Not a Symmetric Matrix'\n");
    printf("Example:\nInput:\n3 3\n1 2 3\n2 4 5\n3 5 6\nOutput:\nSymmetric Matrix\n");
    printf("Explanation: The matrix is square (3 x 3) and for every i and j, element[i][j] = element[j][i].\n\n");

    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Enter elements of matrix:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    if(m != n) {
        is_sym = 0;
    } else {
        for(i = 0; i < m; i++) {
            for(j = 0; j < n; j++) {
                if(a[i][j] != a[j][i]) {
                    is_sym = 0;
                    break;
                }
            }
            if(is_sym == 0) break;
        }
    }

    if(is_sym) {
        printf("Symmetric Matrix\n");
    } else {
        printf("Not a Symmetric Matrix\n");
    }

    return 0;
}
