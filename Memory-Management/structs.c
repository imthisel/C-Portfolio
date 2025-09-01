#include <stdio.h>
#include <stdbool.h>
#include <string.h>


typedef struct {
     char name[50]; 
     int age;
     float gpa;
     bool isFullTime;
}Student;

void printStudent(Student student);

int main(){

    Student student1 =  {"Zion", 30, 2.5, true};
    Student student2 = {"Feeb", 36, 1.0, false};
    Student student3 = {"Nelard", 48, 3.2, false};
    Student student4 = {0};

    strncpy(student4.name, "Amps", 4);
    student4.age = 27;
    student4.gpa = 4.0;
    student4.isFullTime = true;

    printStudent(student1);
    printStudent(student2);
    printStudent(student3);
    printStudent(student4);


    /*
    printf("%s\n", student1.name);
    printf("%d\n", student1.age);
    printf("%.2f\n", student1.gpa);
    printf("%s\n", (student1.isFullTime) ? "Yes" : "No");

    printf("\n%s\n", student2.name);
    printf("%d\n", student2.age);
    printf("%.2f\n", student2.gpa);
    printf("%s\n", (student2.isFullTime) ? "Yes" : "No");

    printf("\n%s\n", student3.name);
    printf("%d\n", student3.age);
    printf("%.2f\n", student3.gpa);
    printf("%s\n", (student3.isFullTime) ? "Yes" : "No");

    printf("\n%s\n", student4.name);
    printf("%d\n", student4.age);
    printf("%.2f\n", student4.gpa);
    printf("%s\n", (student4.isFullTime) ? "Yes" : "No");*/

    return 0;
}

    void printStudent(Student student){
        printf("\n%s\n", student.name);
    printf("%d\n", student.age);
    printf("%.2f\n", student.gpa);
    printf("Full-time: %s\n", (student.isFullTime) ? "Yes" : "No");
    printf("\n");

    }