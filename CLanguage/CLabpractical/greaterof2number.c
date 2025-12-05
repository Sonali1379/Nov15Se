#include<stdio.h>
main(){
    int num1,num2;
    printf("\n enter the value of num1 & num2 : ");
    scanf("%d %d" ,&num1,&num2);
    if(num1>num2){
        printf("\n num1 is greater than num2");
    }
    else{ 
        printf("\n num2 is greater than num1");
    }
}