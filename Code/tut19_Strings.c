#include <stdio.h>
// string is not a datatype but rather a character array in C

void printStr( char str[] ) {
    int i = 0;
    while (str[i] != 0)
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    // char str[] = {'J', 'o', 'h', 'n', '\0'}; // A null value at end is required to make it valid or else garbage value will be added
    // char str[] = "John"; // This type also works
    // char str[4] = "John" will also output garbage value only 5 or more value will output correctly.
    char str[67];
    printf("Enter your string: ");
    gets(str);

    printf("Using custom function: ");
    printStr(str);
    printf("Using printf: %s\n", str);
    printf("Using puts function: ");
    puts(str);

    return 0;
}
