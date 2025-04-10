#include <stdio.h>

// Simple Bubble Sort (no function used)
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Input elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array (Bubble Sort)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Find minimum difference between adjacent elements
    int minDiff = arr[1] - arr[0];
    int a = arr[0], b = arr[1];

    for (int i = 1; i < n - 1; i++) {
        int diff = arr[i + 1] - arr[i];
        if (diff < minDiff) {
            minDiff = diff;
            a = arr[i];
            b = arr[i + 1];
        }
    }

   
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("%d %d\n", a, b);
    

    return 0;
}
