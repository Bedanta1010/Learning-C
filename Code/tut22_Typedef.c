#include <stdio.h>
#include <string.h>

typedef struct Student
{
    int id;
    int marks;
    char fav_char;
    char nname[50];
} std;

int main(int argc, char const *argv[])
{
    // typedef <previous_name> <alias_name>;

    // typedef unsigned long ul;
    // ul l1, l2, l3;
    // typedef int integer;
    // integer a = 4;
    // printf("Value of a is %d\n", a);

    std s1, s2;
    s1.id = 34;
    s2.id = 15;

    printf("Value of s1's id is %d\n", s1.id);
    printf("Value of s2's id is %d\n", s2.id);

    // int* a, b; only a will be considered as pointer value and not b
    typedef int* intPointer;
    intPointer a, b; // both treated as pointer now
    int c = 89;
    a = &c;
    b = &c;

    return 0;
}
