#include <stdio.h>
#include <stdbool.h>

int getMin(int x, int y){
     if(x <=y){
         return x;
     }
     else{
         return y;
     }
}

int main (){
    int min = getMin(2, 9);

    printf("%d", min);

    return 0;
}