#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    gets(s);
    strrev(s); // if not supported, use manual loop
    printf("%s", s);
    return 0;
}
