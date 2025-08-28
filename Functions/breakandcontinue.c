#include <stdio.h>

int main(){

    for(int i = 1; i <=10; i++){
            //break = stop
            //continue = skip
        if(i == 5){
            continue;
        }

        printf("%d\n", i);
    }
    return 0;
}