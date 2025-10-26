#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    if(t > 60) printf("Fan Full Speed");
    else if(t > 40) printf("Fan Medium");
    else printf("Fan Off");

    return 0;
}
