#include<stdio.h>
main(){
    int a,b;
    printf("\n Enter the value a & b");
    scanf("%d,%d",&a,&b);
    printf("\n add=%d" ,a+b);
    printf("\n sub=%d" ,a-b);
    printf("\n mul=%d" ,a*b);
    printf("\n div=%f" ,(float)a/b);
    printf("\n mod=%d" ,a%b);
    return 0;
}