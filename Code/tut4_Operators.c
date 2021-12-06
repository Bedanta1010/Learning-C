#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 34;
    // int b = 6;
    // int b = 34;
    float b = 6.34;

    printf("a + b = %f\n",a + b);
    printf("a - b = %f\n",a - b);
    printf("a * b = %f\n",a * b);
    printf("a / b = %f\n",a / b);

    printf("is a == b? %d\n",a == b);

    // Check docs for other operators..

    // %f is for floats and %d can be used for only ints and strings

    return 0;
}
