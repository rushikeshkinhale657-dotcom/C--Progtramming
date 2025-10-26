#include <stdio.h>

int main() {
    int button;
    scanf("%d", &button);

    if(button == 1)
        printf("EMERGENCY STOP ACTIVE!");
    else
        printf("System Normal");

    return 0;
}
