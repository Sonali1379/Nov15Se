#include<stdio.h>
main(){
    int temp;
    printf("\n Enter the temperature: ");
    scanf("%d" ,&temp);
    if(temp<=20){
        printf("\n Temperature is cold.");
    }
    else if (temp<33){
        printf("\n Temperature is warm.");
    }
    else if(temp<46){
        printf("\n Temperature is hot.");
       
    }
    else{
        printf("\n Temperature is very hot.");
    }
    

}