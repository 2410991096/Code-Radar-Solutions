// Your code here...
#include<stdio.h>
int main(){
    int n , k , i;
    scanf("%d",&n);
    int arr[n],rotated[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    k = k%n;
    for(i=0;i<k;i++){
        rotated[i] = arr[n-k+i];
    }
    for(i=k;i<n;i++){
        rotated[i] = arr[i-k];
    }
    for(i=0;i<n;i++){
        arr[i] = rotated[i];
    }
    printf("%d ",arr[i]);
    return 0;
}