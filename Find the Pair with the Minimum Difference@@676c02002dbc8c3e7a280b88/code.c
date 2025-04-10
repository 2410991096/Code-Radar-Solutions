// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int mindiff = 10000000;
    int a =0 ;
    int b = 0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
           int diff = arr[i]-arr[j];
           if(diff<0) diff = -diff;
            if (diff < mindiff) {
                minDiff = diff;
                a = arr[i];
                b = arr[j];
            }
        }
    }
     printf("%d %d\n", a, b);
    return 0;
}