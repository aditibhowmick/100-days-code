Q66: Insert an element in a sorted array at the appropriate position.

#include <stdio.h>
int main() {
    int arr[100], n, i, element, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements in sorted order: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Find position where element should be inserted
    pos = n;
    for (i = n - 1; i >= 0 && arr[i] > element; i--) {
        arr[i + 1] = arr[i];// shift right
        pos = i;
    }
    arr[pos] = element;
    n++;
    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
