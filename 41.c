

#include <stdio.h>
int main() {
    double base; int exp;
    scanf("%lf %d", &base, &exp);
    double result = 1;
    for (int i=0; i<exp; i++) result *= base;
    printf("%.2lf\n", result);
    return 0;
}
