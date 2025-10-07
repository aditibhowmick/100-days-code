Q98: Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char name[100];
    int i, len, lastSpace = -1;
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    len = strlen(name);
    if (name[len - 1] == '\n')
        name[len - 1] = '\0';
    for (i = 0; i < len; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }
    printf("Output: ");
    printf("%c. ", toupper(name[0]));
    for (i = 1; i < lastSpace; i++) {
        if (name[i] == ' ' && isalpha(name[i + 1]))
            printf("%c. ", toupper(name[i + 1]));
    }
    if (lastSpace != -1)
        printf("%s", &name[lastSpace + 1]);
    printf("\n");
    return 0;
}
