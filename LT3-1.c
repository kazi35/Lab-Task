#include<stdio.h>
int main(){
    int i,hour,overtime,overtime_pay,sum=0;
    for(i=1;i<=10;i++){
        scanf("%d",&hour);
        if(hour>40){
            overtime=hour-40;
            overtime_pay=overtime*12;
            sum += overtime_pay;
            printf("%d no employee get %d tk for %d hour overtime work\n",i,overtime_pay,overtime);
        }else{
            printf("%d no employee does not work overtime\n",i);
        }
    }
    printf("Total overtime pay for 10 employees = %d tk\n",sum);
    return 0;
}