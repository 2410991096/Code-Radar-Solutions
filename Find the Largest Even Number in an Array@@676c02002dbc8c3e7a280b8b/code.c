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
        int even = arr[i]%2==0;
        if(arr[i]%2!=0) printf("-1");
        
    }

}