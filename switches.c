#include <stdio.h>

int main(){
     
    int dayOfWeek = '\0';

    printf("Enter a day of the week (M, T, W, R, F, S, U): ");
    scanf("%c", &dayOfWeek);

    switch(dayOfWeek){
        case 'M':
           printf("It is Monday");
           break;
        case 'T':
           printf("It is Tuesday");
           break;
        case 'W':
           printf("It is Wednesday");
           break;
        case 'R':
           printf("It is Thursday");
           break;
        case 'F':
           printf("It is Friday");
           break;
        case 'S':
           printf("It is Saturday");
           break;
        case 'U':
           printf("It is Sunday");
           break;
        default:
           printf("Please only enter a character only of (M, T, W, R, F, S, U)");

    }



    return 0;
}