#include <stdio.h>

int b = 34;

int ret() {
    return 48*3;
}

int func1(int b) {
    static int myvar = 4; // if no value is mentioned it will initialize from 0 only
    // static int myvar = ret(); now it will not execute because myvar will not be static anymore, because the value needs to be allocated in memory

    printf("The value of myvar is %d\n", myvar);
    myvar++;

    // printf("The value of integer b is %d\n", b); // lcoal variable takes precedence over global varibale
    // printf("The address of b inside func1 is %d\n", &b);

    return b + myvar;
}

int main(int argc, char const *argv[])
{
    int b = 344;

    // printf("The address of b inside main is %d\n", &b);

    int val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);

    int *ptr = &val;
    // printf("The value of func1 is %d\n", val);

    return 0;
}
