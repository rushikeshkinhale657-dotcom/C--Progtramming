#include <stdio.h>

int main() {
    FILE *f = fopen("data.txt", "r");
    char ch;
    while((ch = fgetc(f)) != EOF)
        printf("%c", ch);
    fclose(f);
    return 0;
}
