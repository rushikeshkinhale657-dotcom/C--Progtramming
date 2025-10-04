

#include <stdio.h>
int main() {
    int n, rev = 0, temp;
    scanf("%d", &n);
    temp = n;
    while (temp) {
        rev = rev*10 + temp%10;
        temp /= 10;
    }
    if (n == rev) printf("Palindrome\n");
    else printf("Not Palindrome\n");
    return 0;
}
