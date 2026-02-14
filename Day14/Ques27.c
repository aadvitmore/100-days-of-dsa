#include <stdio.h>

int main() {
    int n, i, j;
    int mat[100][100];
    int is_identity = 1;

    printf("Problem: Write a program to check whether a given square matrix is an Identity Matrix.\n");
    printf("Input:\n- First line: integer n representing number of rows and columns\n");
    printf("- Next n lines: n integers each representing the matrix elements\n");
    printf("Output:\n- Print 'Identity Matrix' if the matrix satisfies the condition\n- Otherwise, print 'Not an Identity Matrix'\n");
    printf("Example:\nInput:\n3\n1 0 0\n0 1 0\n0 0 1\nOutput:\nIdentity Matrix\n\n");

    printf("Enter size n: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i == j && mat[i][j] != 1) {
                is_identity = 0;
                break;
            } else if(i != j && mat[i][j] != 0) {
                is_identity = 0;
                break;
            }
        }
        if(is_identity == 0) break;
    }

    if(is_identity) {
        printf("Identity Matrix\n");
    } else {
        printf("Not an Identity Matrix\n");
    }

    return 0;
}

