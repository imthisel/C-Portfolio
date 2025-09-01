#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){

    float gpa = 2.521;
    float price = 19.994;
    float temperature = -10.1;

    printf("The temperature is %.1f\n", temperature);    
    printf("Your gpa is %.1f\n", gpa);
    printf("The price is %.2f\n", price);

    int age = 25;
    int year = 2025;
    int quantity = 1;

    printf("You are %d years old\n", age);
    printf("The year is %d\n", year);
    printf("You have ordered %dx items\n", quantity);

    double pi = 3.14159265358979;
    double e = 2.7182818284590;

    printf("The value of pi is %.15lf\n", pi);
    printf("The value of pi is %.15lf\n", e);

    char grade = 'A';
    char symbol = '!';
    char currency = '$';
    
    printf("Your grade is %c\n", grade);
    printf("Your favorite sumbol is %c\n\n", symbol);
    printf("The currency is %c\n", currency);

    char name[] = "zion angeles";
    char food[] = "ribs";
    char email[] = "zionangeles01@gmail.com";

    printf("Hello %s\n", name);
    printf("Your favorite food is %s\n", food);
    printf("Your email is %s\n", email);


    // Boolean
    bool isOnline = 1;
    bool isStudent = 0;
    

    if(isOnline){
        printf("You are ONLINE\n");
    }
    else{
        printf("You are OFFLINE");
    }

    if(isStudent){
        printf("You are a student");
    }
    else{
        printf("You are an alumni\n");
    }
    

    // Format Specifiers
    int age2 = 17;
    float price2 = 19.99;
    double pi2 = 3.7182378123;
    char currency2 = '$';
    char name2[] = "Zion";

    printf("%d\n", age2);
    printf("%f\n", price2);
    printf("%lf\n", pi2);
    printf("%c\n", currency2);
    printf("%s\n", name2);

    //learning how to justify
    int num1 = 1;
    int num2 = 10;
    int num3 = 100;

    printf("%2d\n", num1);
    printf("%3d\n", num2);
    printf("%+.4d\n", num3);

    //learning how to be ore precise
    float price4 = 19.99;
    float price5 = 1.50;
    float price6 = -100.00;

    printf("%.2f\n", price4);
    printf("%.2f\n", price5);
    printf("%.2f\n", price6);

    //Arithmetic operators = + - * / % ++ --

    int x = 11;
    int y = 3;
    int z = 0;

    z = x % y; //prints the remainder if %
    x--; //increment of 1 if ++ or decrement if minus

    printf("%d\n", z);
    printf("%d\n", x);

    //input
    int age3 = 8;
    float gpa2 = 0.0f;
    char grade2 = '\12';
    char name32[35] = "";
    
    printf("Enter your age: ");
    scanf("%d", &age3);
    
    printf("Enter your gpa: ");
    scanf("%f", &gpa2);

    printf("Enter your grade: ");
    scanf(" %c", &grade2);

    getchar();
    printf("Enter your full name: ");
    fgets(name32, sizeof(name32), stdin);  //fgets allow you to type in your full name since scanf disregards white spaces
    name32[strlen(name32) - 1] = '\0';// this is a little advanced, this takes off the gap that would usually be there because fgets already has an instilled \n in its own


    printf("%s\n", name32);
    printf("%d\n", age3);
    printf("%.2f\n", gpa2);
    printf("%c\n", grade2);
}