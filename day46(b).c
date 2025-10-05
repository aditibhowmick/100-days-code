Q92: Find the first repeating lowercase alphabet in a string.

#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int freq[26] = {0}; 
    int i, found = 0;
    printf("Enter a string: ");
    gets(str);  
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {  
            freq[str[i] - 'a']++;             
            if (freq[str[i] - 'a'] == 2) {     
                printf("First repeating lowercase alphabet: %c\n", str[i]);
                found = 1;
                break;
            }
        }
    }
    if (!found)
        printf("No repeating lowercase alphabet found.\n");
    return 0;
}
