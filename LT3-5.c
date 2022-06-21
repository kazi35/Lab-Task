#include<stdio.h>
int main(){
    int n,i,flag;
    printf("Enter a number:");
    scanf("%d",&n);
    flag=1;
    for(i=2;i<n;i++){
        if(n%i==0){
            flag=0;
        }
    }
    if(flag==1){
        printf("%d is Prime Number\n",n);
    }
    else{
        printf("%d is not Prime Number\n",n);
    }
    return 0;
}