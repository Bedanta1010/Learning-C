// Functions for dynamic memory allocation

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /*
    // Use of malloc
    int* ptr;
    ptr = (int*) malloc(3 * sizeof(int));

    for (int i = 0; i < 3; i++)
    {
        printf("Enter the value no. %d of this array: ", i + 1 );
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d of this array is: %d.\n", i + 1, ptr[i] ); // values at malloc are always initialized with garbage values, thus 4th value will be garbage
    }
    */

    /*
    // Use of calloc
    int* ptr;
    ptr = (int*) calloc(3 , sizeof(int));

    // If the input block is not present calloc will still provide values for the output 'for loop', i.e, all values will be 0
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the value no. %d of this array: ", i + 1 );
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d of this array is: %d.\n", i + 1, ptr[i] ); // values at calloc are always initialized with 0, thus 4th value will be garbage
    }
    */

    int *ptr;
    int n;
    printf("Enter the size of the array you want to create: ");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no. %d of this array: ", i + 1 );
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is %d\n", i + 1 , ptr[i]);
    }

    // Use of realloc
    printf("Enter the size of the new array you want to create: ");
    scanf("%d", &n);

    ptr = (int *)realloc(ptr, n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the new value no. %d of this array: ", i + 1 );
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The new value at %d of this array is %d\n", i + 1 , ptr[i]);
    }

    free(ptr); // Used to free up the space occupied by the allocated memory

    return 0;
}
