#include<stdio.h>
main(){
    int age;
    printf("\n Enter age of the person : ");
    scanf("%d" ,&age);
    if(age>=1 && age<=12){
        printf("\n He is a child.");
    }
    else if(age>12 && age<20){
        printf("\n He is a teenager.");
    }
    else if(age>19 && age<50){
        printf("\n He is an adult.");
    }
    else{
        printf("\n He is a Senor poerson.");
    }
}