#include <stdio.h>

int main() {
    FILE *pFile = fopen("output.txt", "w");
    
    char text[] = "CARS DRIFTING \n CARS DRIFTING";

    if(pFile == NULL){
        printf("Error opening file\n");
        return 1;
    }

    fprintf(pFile, "%s", text);

    printf("File was written successfully!\n");

    fclose(pFile);

    //relative vs absolute file path, w is for write mode r is read mode

    return 0;
}