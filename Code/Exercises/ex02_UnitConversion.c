/*
km to miles
inches to foot
cm to inch 
pound to kg
inch to meter
*/ 

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int chc;
    body:
    printf("Enter 1 for conversion from Kilometer to Miles\nEnter 2 for conversion from Inches to Foot\nEnter 3 for conversion from Centimeters to Inches\nEnter 4 for conversion from Pound to Kilograms\nEnter 5 for conversion from Inches to Meter\n");
    scanf("%d", &chc);

    float vl;

    if (chc == 1) {
        printf("Enter the value you want to convert: ");
        scanf("%f", &vl);
        printf("%f km is equal to %f miles", vl, vl/1.609);
    } else if (chc == 2) {
        printf("Enter the value you want to convert: ");
        scanf("%f", &vl);
        printf("%f inch is equal to %f feet", vl, vl/12);
    } else if (chc == 3) {
        printf("Enter the value you want to convert: ");
        scanf("%f", &vl);
        printf("%f cm is equal to %f inches", vl, vl/2.54);
    } else if (chc == 4) {
        printf("Enter the value you want to convert: ");
        scanf("%f", &vl);
        printf("%f pound is equal to %f kg", vl, vl/2.205);
    } else if (chc == 5) {
        printf("Enter the value you want to convert: ");
        scanf("%f", &vl);
        printf("%f inch is equal to %f meters", vl, vl/39.37);
    } else {
        printf("Wrong input... Terminating program!!!");
        goto end;
    }

    char cont;
    printf("\nDo you want to continue type (Y/N): ");
    scanf(" %c", &cont);
    if (cont == 'Y' || cont == 'y') {
        printf("\n");
        goto body;
    } else if (cont == 'N' || cont == 'n') {
        printf("Ending the program now...");
        goto end;
    } else {
        printf("Wrong input... Terminating program!!!");
        goto end;
    }
    
    end:
    return 0;
}
