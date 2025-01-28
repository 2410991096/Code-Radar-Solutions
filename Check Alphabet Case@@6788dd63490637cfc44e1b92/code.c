#include <stdio.h>

int main(){
    char c;
    scanf("%c",&c);
    if('A'<=c && 'Z'>=c){
        printf("Uppercase");
    }else{
        printf("Lowercase")
    }
    return 0;
}