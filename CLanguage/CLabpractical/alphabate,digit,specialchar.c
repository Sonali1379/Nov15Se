#include<stdio.h>
main(){
    char s;
    printf("\n Enter the char : ");
    scanf("%c" ,&s);
    if(s>='a' && s<='z'){
        printf("\n %c is an Alphabate" ,s);
    }
    else if(s>='0' && s<='9'){
        printf("\n %c is a digit" ,s);
    }
    else{
        printf("\n %c is a special character" ,s);
    }
}