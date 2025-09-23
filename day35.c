Q69: Find the second largest element in an array.

#include <stdio.h>
int main() {
    int n, i, largest, secondLargest;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if (arr[0] > arr[1]) {
        largest = arr[0];
        secondLargest = arr[1];
    } else {
        largest = arr[1];
        secondLargest = arr[0];
    }
    for (i = 2; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    if (n < 2) {
        printf("Array must have at least two elements.\n");
    } else {
        printf("The second largest element is: %d\n", secondLargest);
    }
    return 0;
}
