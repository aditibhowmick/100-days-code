#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *fin, *fout;
    char ch;
    fin = fopen("info.txt", "r");
    if (fin == NULL) {
        printf("Error: info.txt not found!\n");
        return 1;
    }
    fout = fopen("destination.txt", "r");
    if (fout == NULL) {
        printf("Error: Could not create destination.txt not found!\n");
        fclose(fin);
        return 1;
    }
    while ((ch = fgetc(fin)) != EOF) {
        ch = toupper(ch);     
        fputc(ch, fout);      
    }
    printf("Conversion completed! Output written to destination.txt\n");
    fclose(fin);
    fclose(fout);
    return 0;
}
