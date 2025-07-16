#include <stdio.h>
// Function :
int sum (int a, int b) {
    return a + b;
}

// int sum (int a, int b)  (this is also a function but it is only declared and doesnt have return value)

void printstar (int n) {
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*'); // * is a character here so %c and single quote
    }
    
}

int findCube() {
    int i;
    printf("Enter the number you want cube for: ");
    scanf("%d", &i);
    return (i*i*i);
}


int main(int argc, char const *argv[])
{
    int a, b, c;
    a = 9;
    b = 87;
    c = sum(a, b);
    printf("The sum is %d \n", c);

    // printstar(7);

    int d;
    d = findCube();
    printf("The cube of number entered is %d", d);
    
    return 0;
}
