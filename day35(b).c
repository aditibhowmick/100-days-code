Q70: Rotate an array to the right by k positions.

#include <stdio.h>
int main() {
    int n, k, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n], temp[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter number of positions to rotate (k): ");
    scanf("%d", &k);
    k = k % n;
    for (i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }
    for (i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
    printf("Array after rotating right by %d positions:\n", k);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
