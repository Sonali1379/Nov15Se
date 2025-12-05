#include<stdio.h>
main(){
    char light;
    printf("\n Enter the color of light(Red,Yellow,Green): ");
    scanf("%c" , &light);
    switch (light){
        case 'R':
        case 'r':
        printf("\n Red color indicates to Stop!");
        break;
        case 'Y':
        case 'y':
        printf("\n Yellow color indicates Ready to go.");
        break;
        case 'G':
        case 'g':
        printf("\n Green color indicates to Go now.");
        break;
        default:
        printf("\n Invalid color.");
        break;

    }

        
}