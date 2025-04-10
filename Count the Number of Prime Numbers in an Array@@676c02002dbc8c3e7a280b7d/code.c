#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Number of elements

    int arr[n];
    
    // Input the array
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int primeCount = 0;

    // Check each element for prime
    for(int i = 0; i < n; i++) {
        int num = arr[i];
        int isPrime = 1;

        if (num <= 1) {
            isPrime = 0;
        } else {
            for (int j = 2; j * j <= num; j++) {
                if (num % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime) {
            printf("%d ", num); // print the prime number
            primeCount++;       // increment prime counter
        }
    }

    printf("%d\n",primeCount);

    return 0;
}
