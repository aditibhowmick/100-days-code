Q38: Write a program to find the sum of digits of a number.

#include <stdio.h>
int main() {
    int n, sum = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &n);
    int num = n;  
    while (num != 0) {
        remainder = num % 10;  
        sum += remainder;      
        num = num / 10;        
    }
    printf("Sum of digits of %d = %d\n", n, sum);
    return 0;
}
