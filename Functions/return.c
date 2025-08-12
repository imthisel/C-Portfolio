#include <stdio.h>


double cube (double num){
    return num * num * num;
}

//double square (double num){     //if you change int to double, everything else should be double in the code.
    //int result = num * num;

    //return num * num;
//}

int main() {

    double x = cube(2);
    double y = cube(3);
    double z = cube(4.4);

    printf("%lf\n", x);
    printf("%lf\n", y);
    printf("%lf\n", z);

}