#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr_number[n];
    for(i=0;i<n;i++){
        scanf("%d",arr_number[i]);
    }
    int max , min;
     max = min = arr_number[0];
    for(i=1;i<n;i++){
        if(arr_number[i]>max){
            max = arr_number[i];
        }else{
            min = arr_number[i];
        }
       
    }
    printf("%d%d",max,min); 
    return 0;

}