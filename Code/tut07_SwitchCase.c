// Switch and Case in C

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("Enter you age: ");
    scanf("%d", &age);

    switch (age)
    {
        case 3:
            printf("The age is 3!");
            break;

        case 13:
            printf("The age is 13!");
            break;

        case 23:
            printf("The age is 23!");
            break;    
        
        default:
            printf("You age is neither 3 nor 13 nor 23");
            break;
    }

    return 0;
}
