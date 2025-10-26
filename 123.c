#include <stdio.h>

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int low = 0, high = 4, mid, key;
    
    printf("Enter key: ");
    scanf("%d", &key);

    while(low <= high) {
        mid = (low + high) / 2;
        if(arr[mid] == key) {
            printf("Found at index %d\n", mid);
            return 0;
        }
        else if(arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }

    printf("Not Found");
    return 0;
}
