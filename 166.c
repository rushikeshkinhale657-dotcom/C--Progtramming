#include <stdio.h>

struct Student {
    char name[20];
    int roll;
};

int main() {
    struct Student s[3];
    
    for(int i = 0; i < 3; i++) {
        scanf("%s %d", s[i].name, &s[i].roll);
    }

    for(int i = 0; i < 3; i++)
        printf("%s %d\n", s[i].name, s[i].roll);

    return 0;
}
