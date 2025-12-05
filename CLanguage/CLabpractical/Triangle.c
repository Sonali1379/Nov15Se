#include<stdio.h>
main(){
    int a,b,c;
    printf("\n Enter 3 sides of the triangle : ");
    scanf("%d %d %d" ,&a,&b,&c);
    if(a+b>c){
        if(a+c>b){
            if(b+c>a){
                printf("\n Given triangle is valid");
                if(a==b && b==c){
                    printf("\n This is an Equilateral triangle");
                }
                else if(a==b || b==c || a==c){
                    printf("\n This is an Isosceles triangle");
                }
                else{
                    printf("\n This is a Scalen triangle");
                }
            
            }
        }
        else{
            printf("\n Triangle is not valid");
        }
        
    }
    else{
        printf("\n Triangle is not valid");
    }
    

    
}

