#include <stdio.h>

int main() {
    int arr[100], n, i;
    int candidate = -1, count = 0;

   
    scanf("%d", &n);

    
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 1: Find candidate for majority
    for(i = 0; i < n; i++) {
        if(count == 0) {
            candidate = arr[i];
            count = 1;
        } else if(arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Step 2: Verify candidate
    count = 0;
    for(i = 0; i < n; i++) {
        if(arr[i] == candidate) {
            count++;
        }
    }

    if(count > n / 2) {
        printf("%d\n", candidate);
    } else {
        printf("-1\n");
    }

    return 0;
}
