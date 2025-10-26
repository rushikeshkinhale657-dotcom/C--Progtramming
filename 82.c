#include <stdio.h>

int main() {
    int light;
    printf("Enter light value: ");
    scanf("%d", &light);

    if(light < 200)
        printf("LED ON 💡\n");
    else
        printf("LED OFF\n");

    return 0;
}
