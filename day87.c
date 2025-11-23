#include <stdio.h>
#include <string.h>
enum Role {
    ADMIN,
    USER,
    GUEST
};
int main() {
    char input[20];
    enum Role role;
    scanf("%s", input);
    if (strcmp(input, "ADMIN") == 0)
        role = ADMIN;
    else if (strcmp(input, "USER") == 0)
        role = USER;
    else if (strcmp(input, "GUEST") == 0)
        role = GUEST;
    else {
        printf("Invalid Role\n");
        return 0;
    }
    switch (role) {
        case ADMIN:
            printf("Welcome Admin! You have full access.\n");
            break;
        case USER:
            printf("Welcome User! Limited access granted.\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
    }
    return 0;
}
