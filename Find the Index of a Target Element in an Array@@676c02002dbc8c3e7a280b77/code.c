// Your code here...
#include <stdio.h>

int main() {
    int arr[100], n, target, i, found = 0;

    
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    scanf("%d", &target);

    for(i = 0; i < n; i++) {
        if(arr[i] == target) {
            printf("%d\n",i);
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("-1\n");
    }

    return 0;
}
