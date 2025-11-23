#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    int marks;
};
void display(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
}
int main() {
    struct Student st;
    printf("Enter name, roll, marks: ");
    scanf("%s %d %d", st.name, &st.roll, &st.marks);
    display(st);
    return 0;
}
