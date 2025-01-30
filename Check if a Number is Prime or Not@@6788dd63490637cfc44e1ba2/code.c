#include <stdio.h>

int main(){
    int n ;
    scanf("%d",&n);
    if ((n>0)&&(n%1==0)&&(n%n==0)){
        printf("Prime");
    }   
    else{
        printf("Not Prime");

    }
    return 0;
}