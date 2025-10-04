

#include <stdio.h>
struct Student {
    char name[50];
    int roll;
};
int main() {
    struct Student s = {"Rushii", 10};
    struct Student *ptr = &s;
    printf("Name: %s\nRoll: %d\n", ptr->name, ptr->roll);
    return 0;
}
