#include<stdio.h>
int main(){
    int i, n;
int arr[n];
    
    scanf("%d", &n);

    // if(n < 2) {
    //     printf("At least two elements are required.\n");
    //     return 0;
    // }

    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    int max1 = -1000000, max2 = -1000000;
    int min1 = 1000000, min2 = 1000000;
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max2=max1;
            max1=arr[i];
        }else if(arr[i]>max){
            max2=arr[i];
        }
        if(arr[i]<min){
            min2=min1;
            min1=arr[i];
        }else if(arr[i]<min){
            min2=arr[i];
        }

    }
    int pro1= max1*max2;
    int pro2 = min1*min2;
    if(pro1>pro2){
        printf("%d",pro1);
    }else{
        printf("%d",pro2);
    }
    return 0;
}
