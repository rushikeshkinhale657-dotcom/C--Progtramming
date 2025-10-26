#include <stdio.h>

int sum(int arr[], int n) {
    int s = 0;
    for(int i = 0; i < n; i++)
        s += arr[i];
    return s;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    printf("Sum = %d\n", sum(arr, 5));
    return 0;
}
