// Format Specifiers and Escape Sequences

#include <stdio.h>
#define PI 3.14   // You cannot change preprocessor variables

int main(int argc, char const *argv[])
{
    int a = 8;
    float b = 7.333;
    b = 7.222;
    // printf("The value of a is %d and b is %f\n", a, b);
    // printf("The value of a is %d and b is %.4f\n", a, b);
    // printf("The value of a is %d and b is %10.4f\n", a, b);
    // printf("The value of a is %d and b is %-18.4f after space\n", a, b);

    const float c = 96.785;

    printf("%f is a constant value while %f is a preprocessor variable\n", c, PI);

    return 0;
}

/*
%c for character
%d for int
%f for floats
%l for long
%lf for double
%Lf for double long
*/