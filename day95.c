#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    int marks;
};
struct Student findTopper(struct Student s[], int n) {
    int i, index = 0;
    for (i = 1; i < n; i++) {
        if (s[i].marks > s[index].marks) {
            index = i;
        }
    }
    return s[index];   
}
int main() {
    int n, i;
    struct Student s[50];
    printf("Enter number of students: ");
    scanf("%d", &n);
    printf("Enter student details (Name Roll Marks):\n");
    for (i = 0; i < n; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }
    struct Student topper = findTopper(s, n);
    printf("Top Student: %s | Roll: %d | Marks: %d\n",
           topper.name, topper.roll, topper.marks);
    return 0;
}
