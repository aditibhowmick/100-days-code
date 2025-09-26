Q76: Check if a matrix is symmetric.

#include <stdio.h>
int main() {
    int n;
    printf("Enter the order of the square matrix (n x n): ");
    scanf("%d", &n);
    int A[n][n], flag = 1;
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] != A[j][i]) {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
            break;
    }
    if (flag == 1)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");
    return 0;
}
