#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int a;
    char * ptr;
    int n = 3;

    for (int i = 0; i < n; i++)
    {
        printf("Employee %d:\n", i + 1);
        printf("Enter the length of your employee id: ");
        scanf("%d", &a);

        free(ptr);
        ptr = (char*) calloc(a, sizeof(char));
        printf("Enter you employee id: ");
        scanf("%s", &(*ptr));

        if (strlen(ptr) == a) {
            printf("The Employee ID of Employee no. %d is ", i + 1);
            for (int i = 0; i < a; i++)
            {
                printf("%c", ptr[i]);
            }
            printf("\n\n");
        } else {
            printf("ERROR! Wrong input of employee ID given!!!");
        }
    }
    
    return 0;
}
