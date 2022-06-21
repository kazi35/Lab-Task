#include<stdio.h>
int main(){
    int i,j;
    float sum=0,factorial;

    for(i=1;i<=7;i++){
        factorial=1;
        for(j=1;j<=i;j++){
        factorial=factorial*j;
        }
        sum = sum + (i/factorial); 
    }
    printf("The sum of first seven terms of the following series is %f\n",sum);
    return 0;
}