#include <stdio.h>

int main(){
     //similar to a variable but it holds more than 1 value

    int numbers[] = {10, 20, 30, 40, 50};  ///each value is called an element
    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    //printf("%d", numbers[0]);

    
    for(int i = 0; i < 5; i++){
        printf("%d ", numbers[i]);          //can be used in loops
    }

     int size = sizeof(numbers) / sizeof(numbers[0]);

    /*
    printf("%d\n", sizeof(numbers));
    printf("%d\n", sizeof(numbers[0]));*/

   


    return 0;
}