#include <stdio.h>
#include <ctype.h>
int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    if (str[0] != '\0')
        str[0] = toupper(str[0]);
    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i-1] == ' ' && str[i] != ' ')
            str[i] = toupper(str[i]);
        else
            str[i] = str[i];  
    }
    printf("%s", str);
    return 0;
}
