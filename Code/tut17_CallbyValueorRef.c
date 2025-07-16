#include <stdio.h>

// Example of call by reference, call by value example is function for returning addition of 2 variables
void changeValue (int* address) {
    *address = 345;
}

void addSub(int* a, int* b) {
    int add, sub;
    add = *a + *b;
    sub = *a - *b;
    *a = add;
    *b = sub;
    return;
}

int main(int argc, char const *argv[])
{
    int a = 34, b = 56;

    // printf("The value of a is %d\n", a);
    // changeValue(&a);
    // printf("The value of a now is %d\n", a);

    printf("The value of a and b are %d and %d\n", a, b);
    addSub(&a, &b);
    printf("The value of a and b now are %d and %d\n", a, b);

    return 0;
}
