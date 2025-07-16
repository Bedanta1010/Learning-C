#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Your have entered %d as your age.\n", age);

    if ( age >= 18 ) {
        printf("You can get drivers license!\n");
    } else if ( age < 18 && age >= 16) {
        printf("You can get learner's license!\n");
    } else {
        printf("You are too young!\n");
    }
    
    return 0;
}
