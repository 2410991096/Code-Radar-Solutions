// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n;i++){
        int sum = 0;
        while(arr[i]!=0){
            sum = sum + (arr[i]%10);
            arr[i]/=10;
        }
       
    }
     printf("%d ",arr[n]);
}