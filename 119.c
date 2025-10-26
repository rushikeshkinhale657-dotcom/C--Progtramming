#include <stdio.h>

int main() {
    int a, b, temp;
    scanf("%d %d", &a, &b);

    int *p = &a, *q = &b;

    temp = *p;
    *p = *q;
    *q = temp;

    printf("After swap: %d %d\n", a, b);
    return 0;
}
