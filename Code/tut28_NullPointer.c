#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 34;
    int *ptr = NULL;
    // printf("The address stored in ptr is %d\n", ptr);

    if (ptr != NULL) {
        printf("The address of a is %d\n", ptr);
    } else {
        printf("The pointer is a null pointer and hence cannot be dereferenced");
    }

    // dont initialize a pointer without any value rather make it null if you want to dereference it later on.
    return 0;
}
