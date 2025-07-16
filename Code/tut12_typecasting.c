#include <stdio.h>
/* Typecasting syntax:
 (type) value */
int main(int argc, char const *argv[])
{
    int a = 3;
    // float b = 54/5; will output 10 in the statement below
    float b = (float) 54/5;
    printf("The value of b is %f", b);
    
    return 0;
}
