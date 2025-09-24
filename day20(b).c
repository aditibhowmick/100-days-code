Q40: Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>
int main() {
    int n, remainder;
    long long product = 1;
    int found = 0;  
    printf("Enter a number: ");
    scanf("%d", &n);
    int num = n > 0 ? n : -n;  
    while (num != 0) {
        remainder = num % 10;
        if (remainder % 2 != 0) { 
            product *= remainder;
            found = 1;
        }
        num /= 10;
    }
    if (found)
        printf("Product of odd digits of %d = %lld\n", n, product);
    else
        printf("No odd digits in %d\n", n);
    return 0;
}
