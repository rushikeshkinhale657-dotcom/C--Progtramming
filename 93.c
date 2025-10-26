#include <stdio.h>

int main() {
    int left, right;
    scanf("%d %d", &left, &right);

    if(left < 300 && right < 300)
        printf("Go Straight");
    else if(left < 300)
        printf("Turn Left");
    else if(right < 300)
        printf("Turn Right");
    else
        printf("Stop");

    return 0;
}
