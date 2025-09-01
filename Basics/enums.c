#include <stdio.h>

typedef enum {
        SUCCESS, FAILURE, PENDING
    } Status;

void connectStatus(Status status);

int main() {

        Status status = PENDING;
        connectStatus(status);

        return 0;
    }

void connectStatus(Status status){

    switch(status){
        case SUCCESS:
         printf("Connection was successful\n");
         break;
        case FAILURE:
         printf("Could not connect\n");
         break;
        case PENDING:
         printf("Connecting...\n");
         break;
    }

}


/*
typedef enum {
    SUNDAY = 1, MONDAY = 2, TUESDAY =3 , WEDNESDAY = 4, 
    THURSDAY = 5, FRIDAY = 6, SATURDAY = 7//constants should be uppercase letter
}Day;


//int main (){

    Day today = SATURDAY;

    if(today == SUNDAY || today == SATURDAY){
        printf("It's the weekend");
    }else{
        printf("It's a weekday");
    }
        
    //return 0;
}*/