#include <stdio.h>

int main() {
    int arr[10];
    int i, j;
    int found[1000] = {0}; // assuming IDs are within range 0–999 (you can adjust as needed)

    printf("Enter 10 integers: ");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 10; i++) {
        if(found[arr[i]] == 1) {
            arr[i] = -1; // mark duplicate
        } else {
            found[arr[i]] = 1; // mark as seen
        }
    }

    printf("\nUpdated array: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}



