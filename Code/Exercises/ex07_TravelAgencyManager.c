#include <stdio.h>
#include <string.h>

typedef struct Manager {
    char name[50];
    char dlNo[50];
    char route[50];
    int kms;
} std;

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the amount of details you want to add: ");
    scanf("%d", &n);

    std s[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter details of Driver %d\n\n", i+1);
        printf("Driver's name: ");
        scanf("%s", &s[i].name);
        printf("Driver's License No.: ");
        scanf("%s", &s[i].dlNo);
        printf("Driver's Route: ");
        scanf("%s", &s[i].route);
        printf("Driver's distance travelled in km: ");
        scanf("%d", &s[i].kms);
        printf("\n");
    }

    printf("\n");

    for (int j = 0; j < n; j++)
    {
        printf("~Details of Driver %d~\n\n", j+1);

        printf("Name of driver is %s\n", s[j].name);
        printf("License number of driver is %s\n", s[j].dlNo);
        printf("Route of driver is %s\n", s[j].route);
        printf("Distance travelled by driver is %d km\n\n", s[j].kms);
    }
    
    return 0;
}
