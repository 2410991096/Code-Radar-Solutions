#include <stdio.h>

int main(){
    int side_1 , side_2 , side_3;
    scanf("%d%d%d",&side_1,&side_2,&side_3);
    if(side_1==side_2 && side_1==side_3){
        printf("Equilateral");
    }else if(side_1==side_2 && side_1!=side_3){
        printf("Isosceles");
    }else if(side_1==side_2 && side_2!=side_3){
        printf("Isosceles");
    }else{
        printf("Scalene");
    }
    return 0;
}