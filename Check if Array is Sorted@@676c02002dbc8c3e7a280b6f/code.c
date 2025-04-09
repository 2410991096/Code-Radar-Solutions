// Your code here...
#include <stdio.h>

int main() {
    int n, i, isSorted = 1;

   
    scanf("%d", &n);

    int arr[100]; // assuming max size = 100

   
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check if the array is sorted
    for (i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            isSorted = 0; // Not sorted
            break;
        }
    }

    if (isSorted) {
        printf("Sorted\n");
    } else {
        printf("Not Sorted\n");
    }

    return 0;
}
