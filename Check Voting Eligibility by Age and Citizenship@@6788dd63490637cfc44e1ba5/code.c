#include <stdio.h>



int main() {
int first_age , second_age;
scanf("%d%d",&first_age,&second_age);
if((first_age>=18) && (second_age==1)){
    printf("Eligible");
}else{
    printf("Not Eligible");
}
    return 0;
}  