#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 0 = rock, 1 = paper, 2 = scissor

int main(int argc, char const *argv[])
{   
    srand(time(NULL)); // srand takes seed as an input and is defined inside stdlib.h
    int cChc = rand() % 3;

    int pChc;
    printf("~~ Rock Paper Scissor Game ~~\nEnter 0 for rock, 1 for paper and 2 for scissor\n\n");

    int cCount = 0;
    int pCount = 0;
    for (int i = 0; i < 3; i++)
    {
        printf("Enter your choice: ");
        scanf("%d", &pChc);

        if (pChc == cChc)
        {
            printf("It is a draw!!\n");
            pCount++;
            cCount++;
        } else if (pChc == 1 && cChc == 2)
        {
            printf("Player chose Paper while Computer chose Scissor. Computer Wins!!\n");
            cCount++;
        } else if (pChc == 1 && cChc == 0)
        {
            printf("Player chose Paper while Computer chose Rock. Player Wins!!\n");
            pCount++;
        } else if (pChc == 0 && cChc == 1)
        {
            printf("Player chose Rock while Computer chose Paper. Computer Wins!!\n");
            cCount++;
        } else if (pChc == 0 && cChc == 2)
        {
            printf("Player chose Rock while Computer chose Scissor. Player Wins!!\n");
            pCount++;
        } else if (pChc == 2 && cChc == 0)
        {
            printf("Player chose Scissor while Computer chose Rock. Computer Wins!!\n");
            cCount++;
        } else if (pChc == 2 && cChc == 1)
        {
            printf("Player chose Scissor while Computer chose Paper. Player Wins!!\n");
            pCount++;
        } else {
            printf("Error!!!");
            goto end;
        }
    }

    if (pCount > cCount)
    {
        printf("\nThe Player wins!!");
    } else if (pCount < cCount) {
        printf("\nThe Computer wins!!");
    }else if (pCount == cCount)
    {
        printf("\nIt is a draw!!");
    } else {
        printf("Encountered an Error. Aborting....");
    }
    

    end:
    return 0;
}
