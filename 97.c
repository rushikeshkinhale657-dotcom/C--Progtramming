#include <stdio.h>

int main() {
    int error;
    scanf("%d", &error);

    if(error > 10) printf("Turn Right");
    else if(error < -10) printf("Turn Left");
    else printf("Straight");

    return 0;
}
