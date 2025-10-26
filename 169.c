#include <stdio.h>

int main() {
    int n, temp, sum = 0;
    scanf("%d", &n);
    temp = n;

    while(temp > 0) {
        int r = temp % 10;
        sum += r*r*r;
        temp /= 10;
    }

    if(sum == n) printf("Armstrong");
    else printf("Not Armstrong");
    
    return 0;
}
