// Your code here...
#include <stdio.h>

int main() {
    int arr[100], n, isPalindrome = 1;

    
    scanf("%d", &n);

    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n / 2; i++) {
        if(arr[i] != arr[n - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
