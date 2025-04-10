#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int maxEven = -1; // Initialize as -1 to handle "no even number" case

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0) {
            if (arr[i] > maxEven) {
                maxEven = arr[i];
            }
        }
    }

    printf("%d\n", maxEven);

    return 0;
}
