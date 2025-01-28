#include <stdio.h>

int main(){
    char ch;
    scanf("%c",&ch);
    if('A'<=ch && 'Z'>=ch){
        printf("Uppercase\n");
    }else{
        printf("Lowercase");
    }
    return 0;
}