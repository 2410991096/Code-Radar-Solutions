#include <stdio.h>



int main() {
    int a_b , c_d ;
    scanf("%d%d",&a_b,&c_d);
    if((a_b==c_d)|| (a_b>c_d)){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}