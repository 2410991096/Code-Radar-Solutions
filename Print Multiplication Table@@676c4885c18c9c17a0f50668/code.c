#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i= 1;i<=n*10;i=i+n ){
        printf("n * i = %d",i);
    }
    return 0;
}