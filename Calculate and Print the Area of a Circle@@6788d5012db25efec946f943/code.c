#include <stdio.h>

int main(){
 float r, area;
    const float pi = 3.14;
    
    scanf("%f",&r);
    area = pi * r *r ;
    printf("Area: %.2f\n",area);
    return 0;
}