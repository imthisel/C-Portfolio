#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
 
    //bool isStudent = 1;

    //if(isStudent == true){
        //printf("You are a student");
    //}
   // else{
        //printf("You are NOT a student");
    //}

    char name[50] = "";

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    if(strlen(name) == 0){
         printf("You did not enter your name");
    }
    else{
        printf("Hello %s", name);
    }
    return 0;
}