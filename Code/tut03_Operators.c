// bodmas rule is not followed in c, learn the operator precedence available from the net
#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a, b; // %f will only work with float variables so remember that, and %d for integer values

    printf("Enter number a: ");
    scanf("%f", &a);
    printf("Enter number b: ");
    scanf("%f", &b);

    printf("a + b = %f \n", a+b);
    printf("a - b = %f \n", a-b);
    printf("a * b = %f \n", a*b);
    printf("a / b = %f \n", a/b);
    // if a and b was integer and a = 5, b = 2 then output of this line if it was %d would be 2 (floor of 2.5)

    printf("Is a equal to b? %d", a==b); // if true will return 1, if false will return 0

    return 0;
}
