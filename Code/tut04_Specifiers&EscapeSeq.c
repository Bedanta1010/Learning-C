#include <stdio.h>
#define PI 3.14 // another way to define constant

int main(int argc, char const *argv[])
{
    int a = 8;
    float b = 7.333;
    printf("The value of a is %d and value of b is %f\n", a, b);
    printf("%10.4f\n", b); 

    // %10.4 means the 10 will offset it by 10 places (leave 4 places in front) and the .4 will show 4 decimal places
    /*
    %f -> float
    %d -> integer
    %c -> character
    %l -> long
    %lf -> double
    %LF -> long double
    */

    const float c = 48.12; // constant value, cannot be changed
    printf("%f \\ %f", c, PI);

    return 0;
}
