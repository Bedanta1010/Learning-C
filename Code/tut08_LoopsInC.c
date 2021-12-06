// Loops in C

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, index = 0;
    printf("Enter your number: ");
    scanf("%d", &a);
    printf("List of numbers from 0 to %d\n", a);

    // Do while Loop
    // do {
    //     printf("%d\n", index);
    //     index++;
    // } while (index <= a);

    // While Loop
    // while (index <= a) {
    //     printf("%d\n", index);
    //     index++;
    // }

    // For Loop
    for (size_t index = 0; index <= a; index++)
    {
        printf("%d\n", index);
    }
    

    return 0;
}
