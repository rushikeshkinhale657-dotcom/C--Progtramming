#include <stdio.h>

int main() {
    int error;
    scanf("%d", &error);

    int speed = 200 - (error * 2);
    if(speed < 0) speed = 0;

    printf("Motor Speed: %d", speed);
    return 0;
}
