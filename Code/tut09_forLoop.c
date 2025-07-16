#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, j = 5;
    for (i = 0; i < 5, j < 15; i++) // comma in second condition works as OR
    {
        printf("%d %d\n", i, j);
        j++;
    }
        
    return 0;
}
