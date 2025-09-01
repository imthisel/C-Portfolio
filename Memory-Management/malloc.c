#include <stdio.h>
#include <stdlib.h>

int main() {
   // malloc dynamically reserves memory from the heap at runtime and returns a pointer to it.  
// You specify how many bytes you want (e.g., malloc(sizeof(int)) for one int).  
// Always free the memory after use with free() to avoid memory leaks.  
    
    int number = 0; 
    printf("Enter the number of grades: ");
    scanf("%d", &number);


    char *grades = malloc(number * sizeof(char));
    

    if(grades == NULL){
        printf("Memory allocation failed! \n");
        return 1;
    }

    for( int i = 0; i < number; i++){
        printf("Enter grade #%d: ", i + 1);
        scanf(" %c", &grades[i]);
    }

    for(int i = 0; i < number; i++){
        printf("%c", grades[i]);
    }

    free(grades); 
    grades = NULL; // avoids dangling pointer


    return 0;
}