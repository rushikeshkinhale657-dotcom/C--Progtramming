#include <stdio.h>

int main() {
    char str[50];
    int i, count = 0;
    
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
        if(strchr("aeiouAEIOU", str[i]))
            count++;

    printf("Vowels = %d", count);
    return 0;
}
