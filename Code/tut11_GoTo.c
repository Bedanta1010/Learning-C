// NEVER USE GO TO

#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* label:
        printf("We are inside label\n");
        goto end;
    printf("This statement will be skipped because of go to inside label");
    goto label;
    end:
        printf("This is the end\n"); */

    int num;

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", i);
        for (int j = 0; j < 5; j++)
        {
            printf("Enter a number (To exit enter 0) : ");
            scanf("%d\n", &num);
            if (num == 0) {
                goto end;
            }
        }
        
    }
    end: 

    return 0;
}
