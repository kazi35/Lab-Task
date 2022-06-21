#include<stdio.h>
int main(){
    int i,j,k,n,m,rows;
    scanf("%d",&rows);
    n=rows-1;
    for(i=1;i<=rows;i++){
        /*for(j=1;j<=n;j++){
            printf(" ");
        }*/
        //for pyramid pattern
        for(k=i;k>=1;k--){
            printf("%d ",k);
        }
        printf("\n");
        //n--;
    }

    return 0;

}