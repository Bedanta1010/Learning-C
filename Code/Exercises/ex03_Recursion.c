#include <stdio.h>

int fib_srs(int n) {
    int fib[n];
    if (n == 1) {
        printf("1");
    } else if (n >= 2) {
        fib[0] = 0;
        fib[1] = 1;
        printf("%d, %d", fib[0], fib[1]);
        for (int i = 2; i < n; i++) {
            fib[i] = fib[i-1] + fib[i-2];
            printf(", %d", fib[i]);
        }
    } else if (n < 1) {
        printf("Error");
    }
}

int main(int argc, char const *argv[])
{
    int terms;
    printf("Enter till how many terms you want fibonacci series of: ");
    scanf("%d", &terms);
    fib_srs(terms);
    
    return 0;
}
