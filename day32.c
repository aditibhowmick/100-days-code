Q63: Merge two arrays.

#include <stdio.h>
int main() {
    int n1, n2, i, j;
    printf("enter size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    
    printf("enter elements of first array:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("enter size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];

    printf("enter elements of second array:\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    // merge arrays
    int merged[n1 + n2];
    for (i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    for (j = 0; j < n2; j++) {
        merged[i + j] = arr2[j];
    }
    // merged array
    printf("Merged array:\n");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    return 0;
}
