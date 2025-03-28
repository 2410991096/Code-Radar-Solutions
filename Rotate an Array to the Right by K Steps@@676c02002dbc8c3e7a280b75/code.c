#include <stdio.h>

int main() {
    int arr[100], n, k, i;
    
    
    scanf("%d", &n);
    
  
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    // To handle cases where k > n
    k = k % n;

    int rotated[100];

    // Copy last k elements to the beginning
    for(i = 0; i < k; i++) {
        rotated[i] = arr[n - k + i];
    }

    // Copy the remaining elements
    for(i = k; i < n; i++) {
        rotated[i] = arr[i - k];
    }

    // Copy back to original array (optional)
    for(i = 0; i < n; i++) {
        arr[i] = rotated[i];
    }

    printf("Array after right rotation by %d steps:\n", k);
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
