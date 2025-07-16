// Unions are better for memory management compared to structure
#include <stdio.h>
#include <string.h>

union Student
{
    int id;
    int marks;
    char fav_char;
    char name[50];
};

int main(int argc, char const *argv[])
{
    union Student s1;
    s1.id = 1; // will output garbage value
    s1.marks = 45; // will output garbage value
    s1.fav_char = 'u'; // will output garbage value
    strcpy(s1.name, "Raju"); // will output correct value because it is at end so this value will locked in memory

    printf("The id is %d\n", s1.id);
    printf("The marks is %d\n", s1.marks);
    printf("The favorite character is %c\n", s1.fav_char);
    printf("The name is %s\n", s1.name);

    return 0;
}
