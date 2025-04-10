#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Input
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Logic: Replace each element with greatest on its right
    for (int i = 0; i < n - 1; i++) {
        int max = arr[i + 1];
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > max) {
                max = arr[j];
            }
        }
        arr[i] = max;
    }

    // Last element becomes -1
    arr[n - 1] = -1;

    // Output
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
