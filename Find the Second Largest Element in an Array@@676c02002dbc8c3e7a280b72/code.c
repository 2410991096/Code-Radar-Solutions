#include <stdio.h>

int main() {
    int n, i;
   
    scanf("%d", &n);

    int arr[100]; // assuming max size = 100
 printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // if (n < 2) {
    //     printf("Need at least two elements to find the second largest.\n");
    //     return 0;
    // }

    int first = arr[0], second = -1e9; // initialize

    // Find the largest and second largest
    for (i = 1; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    
        printf("%d\n", second);
    

    return 0;
}
