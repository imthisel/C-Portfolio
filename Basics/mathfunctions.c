#include <stdio.h>
#include <math.h>

int main ()
{
    float x = 3;

    //x = sqrt(x);            -- this is squareroot
    //x = pow(x, 4);      -- this is pwoer
    //x = round (x);
    //x = ceil(x); -- to round up 
    //x = floor(x); -- to round down
    //x = abs(x); -- absolute value, changes all negative into positive
    //x = log(x);
    x = sin(x); 

    printf("%f", x);

    return 0;
}