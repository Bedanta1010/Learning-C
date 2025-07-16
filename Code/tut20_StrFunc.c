#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char s1[] = "harry";
    char s2[] = "ravi";
    char s3[54];

    // puts(strcat(s1, s2));
    // printf("The length of s1 is %d\n", strlen(s1));
    // printf("The reversed version of s2 is: ");
    // puts(strrev(s2));

    strcpy(s3, strcat(s1, s2));
    puts(s3);

    printf("The strcmp value for string s1 and s2 is: %d\n", strcmp(s1, s2)); // since first character of s1 is less than s2 thus negative value

    char p1[20];
    char p2[20];
    char say[] = " is a friend of ";
    

    printf("Enter first friend name: ");
    gets(p1);
    printf("Enter second friend name: ");
    gets(p2);

    puts(strcat(p1, strcat(say, p2)));

    return 0;
}
