#include <stdio.h>
#include <windows.h>

int main(){
 // for loop is to repeat some code a limited #of times
    for(int i = 10; i >= 0; i--){ //1+=2 will make it count by two
        Sleep(1000);
        printf("%d\n", i);
    }

    printf("HAPPY NEW YEAR!");
    return 0;
}