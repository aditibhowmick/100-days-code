Q67: Insert an element in an array at a given position.

#include <stdio.h>
int main() {
    int arr[100], n, i, pos, elem;
    // Input array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter the elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Input element and position
    printf("Enter the element to insert: ");
    scanf("%d", &elem);
    printf("Enter the position (1 to %d): ", n+1);
    scanf("%d", &pos);

    // Shift elements to the right
    for(i = n; i >= pos; i--) {
        arr[i] = arr[i-1];
    }
    // Insert element
    arr[pos-1] = elem;
    n++;

    // Print updated array
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
