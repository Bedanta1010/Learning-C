#include <stdio.h>
#include <string.h>

void parser(char * arr) {
    int in = 0;
    int index = 0;

    for (int i = 0; i < strlen(arr); i++)
    {
        if(arr[i] == '<') {
            in = 1;
            continue;
        } else if (arr[i] == '>') {
            in = 0;
            continue;
        }
        if (in == 0) {
            arr[index] = arr[i];
            index++;
        }
    }
    arr[index] = '\0';
    //Removing trailing spaces from beginning
    while (arr[0] == ' ')
    {
        for (int i = 0; i < strlen(arr); i++)
        {
            arr[i] = arr[i+1];
        }
    }
    //Remove from end
    while (arr[strlen(arr) - 1] == ' ')
    {
        arr[strlen(arr) - 1] = '\0';
    }    
}

int main(int argc, char const *argv[])
{
    char str[100];
    printf("Enter HTML string: ");
    gets(str);

    parser(str);
    printf("The parsed value is ~~%s~~", str);

    return 0;
}
