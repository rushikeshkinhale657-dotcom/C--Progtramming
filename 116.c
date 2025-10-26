#include <stdio.h>

int main() {
    FILE *f = fopen("data.txt", "w");
    fprintf(f, "Hello Robotics!");
    fclose(f);
    return 0;
}
