#include <stdio.h>

int main() {
    int dist;
    scanf("%d", &dist);

    if(dist < 10) printf("STOP - Very Close!");
    else if(dist < 30) printf("Slow Down");
    else printf("SAFE");

    return 0;
}
