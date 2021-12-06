#include <stdio.h>

int sum (int a, int b) {
    return a + b;
}

void printstar (int n) {
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
    
}

int takenNumber () {
    int i;
    printf("Enter a number: ");
    scanf("%d", &i);
    return i;
}

int main(int argc, char const *argv[])
{
    int a, b, c;
    a = 8;
    b = 7;
    c = sum(a, b);

    printf("The sum is %d\n", c);

    printstar(5);
    printf("\n");

    int d = takenNumber();
    printf("Entered number is %d", d);

    return 0;
}
