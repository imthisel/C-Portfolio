#include <stdio.h>

int main() {

    int scores[5] = {0};

    for(int i = 0; i <5; i++){
        printf("Enter a score: ");
        scanf("%d", &scores[i]);
    }
    /*
    printf("Enter a score: ");
    scanf("%d", &scores[1]);

    printf("Enter a score: ");
    scanf("%d", &scores[2]);

    printf("Enter a score: ");
    scanf("%d", &scores[3]);

    printf("Enter a score: ");
    scanf("%d", &scores[4]);*/

    for(int i = 0; i <5; i++){
        printf("%d ", scores[i]);

    }


    return 0;
}