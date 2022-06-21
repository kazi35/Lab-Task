#include<stdio.h>
int main(){
    int mark;
    printf("Enter Mark:");
    scanf("%d",&mark);
    if(mark>100 || mark<0){
        printf("Invalid\n");
    }
    else if(mark<=100 && mark>=80){
        printf("A+\n");
    }
    else if(mark>=75){
        printf("A\n");
    }
    else if(mark>=70){
        printf("A-\n");
    }
    else if(mark>=65){
        printf("B+\n");
    }
    else if(mark>=60){
        printf("B\n");
    }
    else if(mark>=55){
        printf("B-\n");
    }
    else if(mark>=50){
        printf("C\n");
    }
    else if(mark>=45){
        printf("D\n");
    }
    else if(mark>=40){
        printf("E\n");
    }
    else{
        printf("F\n");
    }
    
    return 0;
}