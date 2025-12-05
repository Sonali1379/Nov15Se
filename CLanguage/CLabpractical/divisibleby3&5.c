#include<stdio.h>
main(){
    int num;
    printf("\n Enter the number : ");
    scanf("%d" ,&num);
    if(num%3==0){
        printf("\n The number is divisible by 3");
    
       if(num%5==0){
        printf("\n The number is divisible by 3 & 5");
       } else{
        printf("\n The number is not divisible by 5");
       }
    } else {
        printf("\n The number is not divisible by 3 & 5");
    }   


}