#include <stdio.h>

void birthday(int* age);

int main(){
   
    int age = 18;
    //int *pAge = &age;          //dereference operator -> *
    
    printf("%p\n", &age);
    //printf("%p\n", pAge);
    
    birthday(&age);

    printf("You are %d years old", age);


    return 0;
}

void birthday(int* age){
    (*age)++;
}