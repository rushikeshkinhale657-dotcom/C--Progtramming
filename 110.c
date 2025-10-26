#include <stdio.h>

int main() {
    int choice;
    do {
        printf("1. Start\n2. Stop\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);
    } while(choice != 3);

    return 0;
}
