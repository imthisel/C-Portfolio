#include <stdio.h>

int main() {
 
    int age = 0;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 65){
        printf("You are a senior citizen");
    }
    else if(age >=18){
         printf("You are an adult");
    }
    else if (age == 0){
        printf("You are a a newborn");
    }
    else {
        printf("You are a minor");        
    }

    return 0;
}