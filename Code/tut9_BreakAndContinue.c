#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, age;
    for (a = 0; a < 10; a++) {
        printf("%d\n", a);

        printf("Enter your age: ");
        scanf("%d", &age);

        if (age < 10) {
            break;
        } else if (age > 85) {
            continue;
        }

        printf("This is after continue statement !\n");
    }

    return 0;
}
