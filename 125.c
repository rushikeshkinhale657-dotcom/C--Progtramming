#include <stdio.h>

int main() {
    int arr[5] = {29, 10, 14, 37, 13};
    int min, temp;

    for(int i = 0; i < 5 - 1; i++) {
        min = i;
        for(int j = i + 1; j < 5; j++)
            if(arr[j] < arr[min])
                min = j;

        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    for(int i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    return 0;
}
