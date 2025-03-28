// Your code here...
#include <stdio.h>

int main() {
    int arr[100], n, runningSum[100];

    
    scanf("%d", &n);

   
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate running sum
    runningSum[0] = arr[0];  // First element is same
    for(int i = 1; i < n; i++) {
        runningSum[i] = runningSum[i - 1] + arr[i];
    }

    // Print running sum
   
    for(int i = 0; i < n; i++) {
        printf("%d ", runningSum[i]);
    }

    return 0;
}
