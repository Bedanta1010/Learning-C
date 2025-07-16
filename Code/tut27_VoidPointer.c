#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a  = 514;
    float b = 78.2;
    void *ptr = &a;

    // printf("The value of a is %d\n", *ptr); Cannot be directly dereferenced due to void
    printf("The value of a is %d\n", *( (int *)ptr )); // Void converted into int, similar thing can be for float value of b
    ptr = &b;
    printf("The value of a is %f\n", *( (float *)ptr ));
    
    return 0;
}
