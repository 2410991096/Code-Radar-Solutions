// Your code here...
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a & (1<<(sizeof(int)*8-1))){
    printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}