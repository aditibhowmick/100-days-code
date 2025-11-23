#include <stdio.h>
int main() {
    char srcFile[50], destFile[50];
    FILE *src, *dest;
    char ch;
    printf("Enter source file name: ");
    scanf("%s", srcFile);
    printf("Enter destination file name: ");
    scanf("%s", destFile);
    src = fopen(srcFile, "r");
    if (src == NULL) {
        printf("Error! Source file not found.\n");
        return 1;
    }
    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error! Unable to create destination file.\n");
        fclose(src);
        return 1;
    }
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }
    fclose(src);
    fclose(dest);
    printf("File copied successfully to %s\n", destFile);
    return 0;
}
