#include<stdio.h>
int main(){
    int i,j,flag;
    printf("The prime numbers between 1 and 300 are:\n");
    for(i=2;i<=300;i++){
        flag=1;
        for(j=2;j<i/2;j++){
            if(i%j==0){
                flag=0;  
                break;       
            }
        }
        if(flag==1){
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}

