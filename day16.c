Q31: Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>
int main() {
    int n, i;
    int binary[32];  
    int index = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n == 0) {
        printf("Binary: 0\n");
    } else {
        int num = n;
        while (num > 0) {
            binary[index] = num % 2;  
            num = num / 2;           
            index++;
        }
        printf("Binary of %d: ", n);
        for (i = index - 1; i >= 0; i--) {
            printf("%d", binary[i]);
        }
        printf("\n");
    }
    return 0;
}
