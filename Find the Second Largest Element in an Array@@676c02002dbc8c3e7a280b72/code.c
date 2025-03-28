// Your code here...
#include<stdio.h>
int main(){
    int arr[n],i,n,max1,max2;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(arr[0]>arr[1]){
        max1 = arr[0];
        max2 = arr[1];
    }else{
        max1 = arr[1];
        max2 = arr[0];
    }
    for(i=2;i<n;i++){
        if(arr[i]>largest){
            max2=max1;
            max1=arr[i];
        }else if(arr[i]>max2 && arr[i]!=max1){
            max2 = arr[i];
        }
    }
    printf("%d",max2);
    return 0;
    }