Q73: Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>
int main() {
    int m, n;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);
    int matrix[m][n], rowSum[m];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < m; i++) {
        rowSum[i] = 0;  
        for (int j = 0; j < n; j++) {
            rowSum[i] += matrix[i][j];
        }
    }
    printf("\nMatrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\nSum of each row:\n");
    for (int i = 0; i < m; i++) {
        printf("Row %d sum = %d\n", i + 1, rowSum[i]);
    }
    return 0;
}
