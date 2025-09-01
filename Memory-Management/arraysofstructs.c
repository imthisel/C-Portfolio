#include <stdio.h>

typedef struct {
    char model[25];
    int year;
    int price;
} Car;

int main(){

    Car cars[] = {{"Ferrari 812 Superfast", 2018, 180000}, 
                 {"Nissan GTR R35", 2012, 100000}, 
                 {"Honda Civic EK9", 1999, 29000}};

    int number = sizeof(cars) / sizeof(cars[0]);

    for(int i = 0; i < number; i++){
            printf("%s %d $%d\n", cars[i].model, cars[i].year, cars[i].price);
    }





    return 0;
}