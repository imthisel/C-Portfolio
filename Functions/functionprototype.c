#include <stdio.h>
#include <stdbool.h>

void hello (char name [], int age); // this is a function prototype
bool ageCheck (int age);

int main (){

    hello("Spongebob", 12);

    if(ageCheck(12)){
        printf("You are old enough to work at the Krsuty Krab");
    }
    else{
        printf("You must be 16+ to work at the Krusty ");
    }
    return 0;   
}

void hello (char name [], int age){// accept a character array and an integer name
     printf("Hello %s\n", name);
     printf("You are %d years old\n", age);
} 

bool ageCheck (int age){
    return age >= 16;
}

