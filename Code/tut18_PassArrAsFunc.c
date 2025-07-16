#include <stdio.h>

int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i + 1, array[i]);
    }
    // array[0] = 382; // Any value change in here gets reflected in main() too. IMPORTANT!!!!

    return 0;
}

void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i + 1, *(ptr + i));
    }

    *(ptr + 2) = 6565;
}

void func3(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at %d, %d is %d\n", i + 1, j + 1, arr[i][j]);
        }
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {23, 14, 15, 7};
    int arr1[2][2] = {{31, 18}, {9, 12}};
    // func1(arr);

    func2(arr);
    func2(arr); // Change value reflected here because value change is called after for loop is executed
    func3(arr1);

    return 0;
}
