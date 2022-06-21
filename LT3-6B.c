#include<stdio.h>
int main(){
    int n,i,f1=-1,f2=1,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=f1+f2;
        printf("%d ",sum);
        f1=f2;
        f2=sum;
    }
    printf("\n");
    return 0;
}