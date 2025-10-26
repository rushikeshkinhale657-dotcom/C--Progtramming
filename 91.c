#include <stdio.h>

int main() {
    int sensor;
    printf("Enter sensor reading: ");
    scanf("%d", &sensor);

    if(sensor < 500)
        printf("Move Left\n");
    else if(sensor > 700)
        printf("Move Right\n");
    else
        printf("Go Straight\n");

    return 0;
}
