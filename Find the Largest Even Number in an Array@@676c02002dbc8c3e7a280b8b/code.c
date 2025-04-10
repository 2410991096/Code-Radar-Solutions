// Your code here...
#include<stdio.h>
int main(){
    int n;
    int maxeven = -1;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            if(arr[i]>maxeven)
            maxeven = arr[i];
        }else{
            printf("-1");
        }
       
        
    }

}