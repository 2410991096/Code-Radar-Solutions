// Your code here...
#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    int even , odd;
    even = odd = 0;
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    printf("%d %d ",even,odd);
    return 0;
}