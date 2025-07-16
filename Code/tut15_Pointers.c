#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 76;
    int* ptra = &a; // int* and *ptra both are correct

    printf("The value of a is %d\n", a);
    printf("The value of a is %d\n", *ptra);
    //printf("The address of a is %x\n", ptra); // %x is for hexadecimal representation, %p is for pointer representation
    printf("The address of a is %p\n", ptra); // &a also works instead of ptra
    printf("The address of pointer to a is %p\n", &ptra);

    // int *ptr2;
    int *ptr2 = NULL; // Null pointer
    printf("The address of some value is %p\n", ptr2);

    return 0;
}
