#include <stdio.h>

int main(int argc, char const *argv[])
{
    int val;
    int num;
    printf(
        "Enter the following for conversion of units: \n0 for g to kg\n1 for cm to inch\n2 for km to miles\n3 for g to pounds\n4 for ml to litre\n\nEnter here: "
    );
    scanf("%d", &val);

    printf("Now enter the amount needed for conversion: ");
    scanf("%d", &num);

    if (val == 0) {
        printf("The result is %.2f kg\n", (float) num / 1000);
    } else if (val == 1) {
        printf("The result is %.2f inch\n", (float) num / 2.54);
    } else if (val == 2) {
        printf("The result is %.2f miles\n", (float) num / 1.609);
    } else if (val == 3) {
        printf("The result is %.2f oz\n", (float) num / 453.592);
    }else if (val == 4) {
        printf("The result is %.2f L\n", (float) num / 1000);
    } else {
        printf("Please put correct values\n");
    }

    return 0;
}
