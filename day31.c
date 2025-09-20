Q61: Search for an element in an array using linear search.

#include <stdio.h>
int main() {
    int n, i, element, found = 0;
    printf("enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("enter the element to search: ");
    scanf("%d", &element);
    for(i = 0; i < n; i++) {
        if(arr[i] == element) {
            printf("element %d found at position %d.\n", element, i+1);
            found = 1;
            break; 
        }
    }
    if(!found) {
        printf("element %d not found in the array.\n", element);
    }
    return 0;
}
