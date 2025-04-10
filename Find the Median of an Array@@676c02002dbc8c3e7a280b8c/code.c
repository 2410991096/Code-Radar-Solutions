// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
   
    
        if(n%2!=0){
            int ans = arr[n/2];
            printf("%d",ans);
        }else{
            float ans1 = (arr[n/2] + arr[(n/2)-1])/2.0;
            printf("%f",ans1);
        }
    
}