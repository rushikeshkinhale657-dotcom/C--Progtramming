#include <stdio.h>

int main() {
    int temp;
    printf("Enter temperature: ");
    scanf("%d", &temp);

    if(temp > 50) {
        printf("Warning! Temperature too high.\n");
    } else {
        printf("Temperature Normal.\n");
    }

    return 0;
}
