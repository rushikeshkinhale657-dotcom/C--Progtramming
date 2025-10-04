

#include <stdio.h>
int main() {
    FILE *fp;
    char text[100];
    fp = fopen("output.txt","w");
    if(fp == NULL){
        printf("Error creating file!\n");
        return 0;
    }
    printf("Enter text: ");
    scanf(" %[^\n]", text);
    fprintf(fp, "%s", text);
    fclose(fp);
    printf("Data written to file.\n");
    return 0;
}
