

#include <stdio.h>
int main() {
    FILE *fp;
    char ch;
    int count = 0;
    fp = fopen("test.txt","r");
    if(fp == NULL){
        printf("File not found!\n");
        return 0;
    }
    while((ch = fgetc(fp)) != EOF)
        count++;
    fclose(fp);
    printf("Total characters = %d\n", count);
    return 0;
}
