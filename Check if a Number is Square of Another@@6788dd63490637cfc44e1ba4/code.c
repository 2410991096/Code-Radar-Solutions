#include <stdio.h>



int main() {
    int first_num , second_num;
    scanf("%d%d",&first_num,&second_num);
    if((first_num)==(second_num*second_num)){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}