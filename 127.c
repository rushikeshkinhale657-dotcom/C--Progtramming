#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Max = %d\n", max(a, b));
    return 0;
}
