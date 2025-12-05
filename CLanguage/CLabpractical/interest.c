#include<stdio.h>
main(){
    int P,T,R;
    float SI;
    printf("\n Enter the value of P , T & R");
    scanf("%d,%d,%d" ,&P,&T,&R);
    SI=(P*T*R)/100;
    printf("\n SI=%f",SI);
    return 0;
}