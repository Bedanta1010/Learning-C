// Arrays are mutable
#include <stdio.h>

int main(int argc, char const *argv[])
{
    // int marks[4];

    // marks[0] = 4;
    // marks[1] = 24;
    // marks[2] = 43;
    // marks[3] = 37;
    // int marks[4] = {4, 24, 43, 37}; can be written like this in short form and marks[] can be written instead too, only works on 1D array
    // printf("Marks of student 3 is %d\n", marks[2]);

    // marks[2] = 49;
    // printf("Marks of student 3 is %d\n", marks[2]);

    // for (int i = 0; i < 4; i++) {
    //     printf("Enter the marks of student %d: ", i+1);
    //     scanf("%d", &marks[i]);
    // }

    int marks[2][4] = {{24, 35, 67, 12},
                        {9, 45, 11, 98}}; // 2 is row, 4 is column
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++)
        {
            printf("The marks of student %d of class %d is %d.\n", j+1, i+1, marks[i][j]);
        }
    }
    

    return 0;
}
