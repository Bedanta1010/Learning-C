// If else and control statements

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("You are %d years of age !\n", age);

    if (age >= 18) {
        printf("You are allowed to drive.\n");
    } else if(age > 10) {
        printf("You are not allowed to drive yet but soon you will be !");
    } else {
        printf("You are not allowed to drive.\n");
    }

    return 0;
}
