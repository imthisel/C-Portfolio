#include <stdio.h>
#include <stdbool.h>
#include <string.h> //this is for line 14

int main (){
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency ='$';
    float total = 0.0f;
    
    printf("What car would you like to buy?: ");
    fgets(item, sizeof(item), stdin);
    //to remove the new line character->
    item[strlen(item) - 1] = '\0';

    printf("What is the price for each ferrari 812?: ");
    scanf("%f", &price);

    printf("How many ferrari 812s would you like?: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("\nYou have bought %d %s/s\n", quantity, item);
    //%d is for integer while %s is for strings
    printf("The total is: %c%.2f", currency, total);
    // the ".2" displays two digits after the decimal
    return 0;

}
    
