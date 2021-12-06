#include <stdio.h>

int main(int argc, char const *argv[])
{
    /*
    label:
        printf("We are inside a label!\n");
        goto end;

    printf("Hello World\n");
    goto label;

    end:
        printf("We are inside end!");
    */

    int num;

    for (int i = 0; i < 8; i++) {
        printf("%d\n", i);

        for (int j = 0; j < 8; j++) {
            printf("Enter a number (Enter 0 to exit): ");
            scanf("%d", &num);

            if (num == 0) {
                goto end;
            }
        }
    }

    end:
    
    return 0;
}
