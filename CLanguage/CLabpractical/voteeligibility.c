#include<stdio.h>
main(){
    int Age;
    printf("\n enter the age : ");
    scanf("%d" ,&Age);
    if(Age>=18){
        printf("\n Eligible");
    }
    else{
        printf("\n Not eligible");
    }
}