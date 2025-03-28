// Your code here...
#include<stdio.h>
int main(){
    int n ,i;
    int arr[n]; 
    int count = 0; candidate = -1;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(count ==0){
            candidate = arr[i];
            count =1;
        }else if(arr[i]==candidate){
            count ++;
        }else{
            count --;
        }
    }
    count =0;
    for(i=0;i<n;i++){
        if(arr[i]==candidate){
            count ++;
        }
    }
    if(count>n/2){
        printf("%d",candidate);
    }else printf("-1");
    return 0;
}