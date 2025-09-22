Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>
int main() {
    int length, breadth, area, perimeter;
    // Input length and breadth
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &breadth);

    // Calculations
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // Display results
    printf("Area of rectangle = %d\n", area);
    printf("Perimeter of rectangle = %d\n", perimeter);
    return 0;
}
