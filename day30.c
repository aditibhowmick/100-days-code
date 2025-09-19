Q59: Count even and odd numbers in an array.

#include <stdio.h>
int main() {
    int n, i;
    int evenCount = 0, oddCount = 0;
    printf("enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }
    printf("total even numbers = %d\n", evenCount);
    printf("total odd numbers  = %d\n", oddCount);
    return 0;
}
