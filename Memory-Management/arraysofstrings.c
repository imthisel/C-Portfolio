#include <stdio.h>
#include <string.h>

int main(){
    
    //EXERCISE
    
    char names[5][25] = {0};
    int rows = sizeof(names) / sizeof(names[0]);


    

    for (int i = 0; i < rows; i++){
        printf("Enter a name (any): ");
    fgets(names[i], sizeof(names[i]), stdin);   
    names[i][strlen(names[i]) -1]= '\0';
    }

    for(int i = 0; i < rows; i++){
        printf("%s\n", names[i]);
    }
    /*
    printf("Enter a name (any): ");
    fgets(names[1], sizeof(names[1]), stdin);   
    names[1][strlen(names[1]) -1]= '\0';

    printf("Enter a name (any): ");
    fgets(names[2], sizeof(names[2]), stdin);   
    names[2][strlen(names[2]) -1]= '\0';

    printf("%s\n", names[0]);
    printf("%s\n", names[1]);
    printf("%s\n", names[2]);*/



    //MAIN ARRAY OF STRINGS
    /*
    char fruits[][10] = {"Apple", 
                         "Banana", 
                        "Coconut", 
                        "Lemon", 
                        "Pineapple"};
    int size = sizeof(fruits) / sizeof(fruits[0]);

    fruits[0][0] = 'e';
    fruits[0][4] = 'A'; // this is to switch characters, practice and testting

    fruits[1][0] = 'a';
    fruits[1][5] = 'B';

    fruits[2][0] = 'a';
    fruits[2][6] = 'B';


    for(int i = 0; i<size; i++){
        printf("%s\n", fruits[i]);
    }*/


    return 0;
}