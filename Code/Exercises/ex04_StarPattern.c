#include <stdio.h>

int main(int argc, char const *argv[])
{
    int chc;
    printf("Enter 0 if you want to print normal star pattern, enter 1 if you want the reversed format: ");
    scanf("%d", &chc);

    if (chc == 0)
    {
        int tms;
        printf("How many times do you want the pattern to be printed? ");
        scanf("%d", &tms);

        if (tms < 1)
        {
            printf("Error, terminating program....");
            goto end;
        }

        for (int i = 0; i < tms; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else if (chc == 1)
    {
        int tms;
        printf("How many times do you want the pattern to be printed? ");
        scanf("%d", &tms);

        if (tms < 1)
        {
            printf("Error, terminating program....");
            goto end;
        }

        for (int i = tms; i > 0; i--)
        {
            for (int j = i; j > 0; j--)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else
    {
        printf("Wrong input!! Terminating program...");
        goto end;
    }

end:
    return 0;
}
