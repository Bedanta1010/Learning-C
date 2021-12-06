#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    printf("Enter number a: ");
    scanf("%d", &a);

    printf("Enter number b: ");
    scanf("%d", &b);

    printf("The sum is %d\n", a + b);

    return 0;
}

// gcc ./tut2_basicStructure.c -o smth   for making a different exe file
// gcc -Wall -save-temps main.c -o bedanta     to create different files which contains the processes and other similar stuff