

#include <stdio.h>
struct Student {
    char name[50];
    int roll;
};
void display(struct Student s) {
    printf("Name: %s, Roll: %d\n", s.name, s.roll);
}
int main() {
    struct Student s1 = {"Rushii", 101};
    display(s1);
    return 0;
}
