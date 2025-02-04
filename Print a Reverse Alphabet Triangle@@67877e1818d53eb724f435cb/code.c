#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int a=1;
        for(int j=1;j<=n-i;j++){
            int b=a+64;
            char c=(char)b;
            printf("%c ",c);
            a++
        }
        printf("\n");
    }
    return 0;
}