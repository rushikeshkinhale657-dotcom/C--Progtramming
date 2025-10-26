#include <stdio.h>

int main() {
    int sensor;

    while(1) {
        printf("Enter sensor value: ");
        scanf("%d", &sensor);

        if(sensor < 30) {
            printf("Safe ✅\n");
        } else {
            printf("Danger! ⚠️\n");
            break;
        }
    }
    return 0;
}
