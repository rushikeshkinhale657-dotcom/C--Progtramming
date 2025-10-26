#include <stdio.h>

int main() {
    int arr[5] = {10, 25, 30, 5, 70};
    int key, found = 0;
    
    printf("Enter key: ");
    scanf("%d", &key);

    for(int i = 0; i < 5; i++) {
        if(arr[i] == key) {
            printf("Found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if(!found) printf("Not Found");
    return 0;
}
