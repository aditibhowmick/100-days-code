Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>
int main() {
    int num1, num2, sum, diff, prod;
    float quot;
    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculations
    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;

    // Display results
    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", diff);
    printf("Product = %d\n", prod);
    if (num2 != 0) {
        quot = (float) num1 / num2;  // typecast for decimal result
        printf("Quotient = %.2f\n", quot);
    } else {
        printf("Division by zero is not allowed.\n");
    }
    return 0;
}
