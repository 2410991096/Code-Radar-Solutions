// Your code here...
#include<stdio.h>
int main(){
    int n,i,k;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    k = k%n;
    int temp[100];
    for(i =0;i<k;i++){
        temp[i] = arr[n-k+i];
    }
    for(i=n-1;i>=k;i--){
        arr[i] = arr[i-k];
    }
    for(int i=0;i<k;i++){
        arr[i] = temp[i];
    }
    for(i=0;i<n;i++){
        printf("%d",arr[i]);

    }
    return 0;

    
}