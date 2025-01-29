#include <stdio.h>

int main(){
    int a_b,c_b;
    scanf("%d%d",&a_b,&c_b);
    if(a_b==c_b){
        printf("Equal");
    }else if(a_b>c_b){
        printf("First");
    }else{
        printf("Second");
    }
    return 0;
}