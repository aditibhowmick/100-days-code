Q62: Reverse an array without taking extra space.

#include <stdio.h>
int main() {
    int n, i;
    printf("enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int start = 0, end = n - 1, temp;
    while(start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    printf("reversed array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
