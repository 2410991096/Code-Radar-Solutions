// Your code here...
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
        printf(" ");
        }
        for(int m=1;m<=i;m++){
            printf("%d",m);
        }
        for(int k=1;k<=i-1;k++){
            printf("%d",k);
        }
        printf("\n");
    }
}