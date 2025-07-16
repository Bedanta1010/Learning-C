#include <stdio.h>

void arrayRev(int arg[]){
    printf("For normal array: ");
    for (int i = 0; i < 7; i++) {
        printf("%d ", arg[i]);
    }

    printf("\nFor reversed array: ");
    for (int j = 6; j > -1; j--) {
        printf("%d ", arg[j]);
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5, 6, 78};
    arrayRev(arr);
    return 0;
}
