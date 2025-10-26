#include <stdio.h>

int main() {
    int distance;
    scanf("%d", &distance);

    if(distance < 20) printf("STOP!");
    else printf("MOVE FORWARD");

    return 0;
}
