#include <stdio.h>

int main() {
    char s[200];
    int count=1,i;
    gets(s);
    for(i=0;s[i]!='\0';i++)
        if(s[i]==' ') count++;
    printf("Words = %d",count);
    return 0;
}
