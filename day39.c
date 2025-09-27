#include <stdio.h>
int main() {
    int n, i, j, flag = 1;
    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);
    int a[n][n];
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The matrix is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i][i] == a[j][j]) {
                flag = 0;
                break;
            }
        }
        if (!flag)
            break;
    }
    if (flag)
        printf("All diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are NOT distinct.\n");
    return 0;
}

