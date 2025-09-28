Q79: Perform diagonal traversal of a matrix.

#include <stdio.h>
int main() {
    int m, n;
    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &m, &n);
    int a[m][n];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nMatrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\nDiagonal Traversal:\n");
    for (int k = 0; k < m + n - 1; k++) {
        int i = (k < n) ? 0 : k - n + 1;
        int j = (k < n) ? k : n - 1;
        while (i < m && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }
    return 0;
}
