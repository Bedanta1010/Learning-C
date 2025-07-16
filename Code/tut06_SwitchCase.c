#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    switch (age)
    {
    case 3:
        printf("Your age is 3\n");
        break; // if break here is commented then the case 13 part will execute even after entering 3 as input but not the others
    case 13:
        printf("Your age is 13\n");
        break; // if break in 3 and 13 then 23 part will execute too along with previous ones but not the default part
    case 23:
        printf("Your age is 23\n");
        break; // if this alone is break then this output will execute and default one will execute
    
    default:
        printf("Your age is not 3, 13, 23\n");
        break; // not usually required if a output is provided
    }
    // switch can be nested as well like if else and loops

    return 0;
}
