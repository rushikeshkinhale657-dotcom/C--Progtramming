

#include <stdio.h>
#include <ctype.h>
int main() {
    char s[200];
    int count = 0;
    scanf(" %[^\n]", s);
    for (int i=0; s[i]; i++) {
        char ch = tolower(s[i]);
        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') count++;
    }
    printf("%d\n", count);
    return 0;
}
