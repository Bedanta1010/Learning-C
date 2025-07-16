#include <stdio.h>
#include <string.h>

struct Student
{
    int id;
    int marks;
    char fav_char;
    char nname[50];
};
// } ravi, rohan, ezekiel; this is also possible
// struct Student ravi, rohan, ezekiel; this is global version, will be accessed by any function


int main(int argc, char const *argv[])
{
    struct Student ravi, rohan, ezekiel; // local version, only able to access through main function

    ravi.id = 1;
    rohan.id = 2;
    ezekiel.id = 3;

    ravi.marks = 81;
    rohan.marks = 54;
    ezekiel.marks = 93;

    ravi.fav_char = 'c';
    rohan.fav_char = 'n';
    ezekiel.fav_char = 'd';

    strcpy(ravi.nname, "Raju");

    printf("The marks of Ezekiel is %d\n", ezekiel.marks);
    printf("Ravi's nickname is %s.\n", ravi.nname);

    return 0;
}
