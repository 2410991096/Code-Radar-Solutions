#include <stdio.h>

int main(){
    char ch;
    scanf("%c",&ch);
    if('A'<=ch && 'Z'>=ch){
        printf("Uppercase\n");
    }else{
        printf("Lowercase\n");
    }
    return 0;
}