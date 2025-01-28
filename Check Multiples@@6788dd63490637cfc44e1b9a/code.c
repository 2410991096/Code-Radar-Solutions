#include <stdio.h>



int main() {
    int number_check ,number_divisor;
    scanf("%d%d",&number_check,&number_divisor);
    if(number_check%number_divisor==0){
        printf("Yes");
    }else{
        printf("No");
    }

    return 0;
}