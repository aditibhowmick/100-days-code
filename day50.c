Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>
int main() {
    char date[11];
    int day, month, year;
    printf("Enter date in dd/04/yyyy format: ");
    scanf("%d/%d/%d", &day, &month, &year);
    if (month == 4)
        printf("Converted date: %02d-Apr-%d\n", day, year);
    else
        printf("Month is not 04. Please enter valid format.\n");
    return 0;
}


