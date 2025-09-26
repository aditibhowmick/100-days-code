Q75: Add two matrices.

#include <stdio.h>
int main() {
    int m, n;
    printf("Enter number of rows and columns of matrices: ");
    scanf("%d %d", &m, &n);
    int A[m][n], B[m][n], Sum[m][n];
    printf("Enter elements of first matrix (A):\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter elements of second matrix (B):\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("Resultant Matrix after Addition:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", Sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
