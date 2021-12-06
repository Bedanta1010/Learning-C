#include <stdio.h>

int main(int argc, char const *argv[])
{
    // int marks[4];

    /*
    marks[0] = 34;
    printf("Marks of student 1 is %d\n", marks[0]);

    marks[0] = 454;
    printf("Marks of student 1 is %d\n", marks[0]);
    */

    // marks[0] = 45;
    // marks[1] = 55;
    // marks[2] = 28;
    // marks[3] = 34;

    // for (int i = 0; i < 4; i++) {
    //     printf("Enter the marks of %d element: ", i);
    //     scanf("%d", &marks[i]);
    // }

    // int marks[4] = {54, 56, 12, 45};

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("The marks of student %d is %d\n", i+1, marks[i]);
    // }
    
    int marks[2][4] = {{45, 84, 96, 31},
                            {41, 99, 28, 64}};
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("The value of %d, %d element of array is %d\n", i, j, marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}
