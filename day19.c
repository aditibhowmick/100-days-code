Q37: Write a program to find the LCM of two numbers.

#include <stdio.h>
int hcf(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int a, b, lcm_value;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int h = hcf(a, b);
    lcm_value = (a * b) / h;  
    printf("LCM of %d and %d is %d\n", a, b, lcm_value);
    return 0;
}
