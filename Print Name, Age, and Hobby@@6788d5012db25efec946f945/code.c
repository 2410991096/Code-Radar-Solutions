#include <stdio.h>

int main(){
    char name[50];
    int a;
    char hobby[100];
    scanf("%49s %d %99[^\n]",&name,&a,&hobby);
    printf("Name: %s\n",name);
    printf("Age: %d\n",a);
    printf("Hobby: %s\n,hobby");
    return 0;
}