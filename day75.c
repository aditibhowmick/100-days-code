#include <stdio.h>
int main() {
    char filename[50];
    char text[200];
    FILE *fp;
    printf("Enter the filename: ");
    scanf("%s", filename);
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error! File does not exist.\n");
        return 1;
    }
    getchar();  
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);
    fputs(text, fp);
    fclose(fp);
    printf("File updated successfully with appended text.\n");
    return 0;
}
