#include <stdio.h>

int main() {
    int n, k;
    
    scanf("%d", &n);

    int arr[100]; // max size
   
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    scanf("%d", &k);

    k = k % n; // Handle if k > n

    int temp[100]; // temporary array

    // Step 1: Copy last k elements to temp
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Step 2: Shift the remaining n-k elements to the right
    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // Step 3: Copy temp elements to beginning
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }

    // Output result
   
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
