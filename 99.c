#include <stdio.h>

int main() {
    int input;
    scanf("%d", &input);

    int angle = (input * 180) / 1023;
    printf("Servo Angle: %d°", angle);

    return 0;
}
