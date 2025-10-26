#include <stdio.h>

int main() {
    int battery;
    scanf("%d", &battery);

    if(battery > 80) printf("Battery Good");
    else if(battery > 30) printf("Battery Medium");
    else printf("Recharge Battery!");

    return 0;
}
