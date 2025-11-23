#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};
int main() {
    struct Student s;
    printf("Name: ");
    scanf("%s", s.name);
    printf("Roll: ");
    scanf("%d", &s.roll_no);
    printf("Marks: ");
    scanf("%f", &s.marks);
    printf("Name: %s | Roll: %d | Marks: %.0f\n", s.name, s.roll_no, s.marks);
    return 0;
}
