#include <stdio.h>

struct Student {
    char name[20];
    int roll;
};

int main() {
    struct Student s = {"Amit", 10};
    printf("Name: %s\nRoll: %d", s.name, s.roll);
    return 0;
}
