

#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    scanf("%s", s);
    int n = strlen(s);
    int flag = 1;
    for (int i=0; i<n/2; i++)
        if (s[i] != s[n-1-i]) flag = 0;
    if (flag) printf("Palindrome\n");
    else printf("Not Palindrome\n");
    return 0;
}
